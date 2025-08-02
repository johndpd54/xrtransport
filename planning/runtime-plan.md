# xrtransport Runtime Implementation Plan

## Overview
xrtransport is a **transparent serialization layer** that:
1. Serializes OpenXR calls on the client side
2. Deserializes them on the server side and runs them on the native OpenXR runtime
3. Sends back return values and modified pointer data
4. Applies the results on the client side

**Key Principle**: All state is handled by the native OpenXR runtime on the server. xrtransport is just a transparent network layer.

## Phase 1: Redo Project Structure

### Step 1.1: Plan Struct and Function Generation Mechanism
- [ ] Write code to generate with straight Python/mako instead of using preprocessor macros (I will do this step, not the agent)

### Step 1.2: Implement Return Data Serialization Strategy
- [ ] Implement code to figure out data bindings that need to be sent back to the client (python code based on parsed spec)
    - The python code should do something like the following: Do a depth first search through struct definitions, collecting a list of bindings that could be modified when running the function on the host (e.g. s->struct_member.some_pointer->pointer_to_data_that_could_be_modified).
    - These bindings will be used in the function bodies to know what to send back to the client when the server executes the command, and on the client to know how to deserialize the data it got from the server.

### Step 1.3: Implement In-place Deserialize Mechanism
- [ ] Choose strategy for in-place deserialization: a) parameter to existing deserialize logic or b) set of new in-place deserialization functions
- [ ] Implement deserialize functions to deserialize in place, assuming the pointers are already allocated, based on the strategy chosen above

### Step 1.4: Plan Generator for Client-side Function Bodies
- [ ] Write Python/mako code to generate each function, one at a time, based on the following general structure: a) serialize parameters onto output stream, b) wait for response, c) apply result based on bindings chosen in Step 1.2

## Phase 2: Detailed Implementation Plan

### Step 2.1: Enhanced Spec Parser and Data Binding Analysis
- [ ] **Extend `XrParam` class** to include output analysis:
  ```python
  class XrParam:
      def __init__(self, type_, name):
          # ... existing fields ...
          self.is_output = False  # True if parameter can be modified by function
          self.is_input = False   # True if parameter is read by function
          self.output_bindings = []  # List of data paths that could be modified
          self.requires_allocation = False  # True if output needs memory allocation
  ```

- [ ] **Implement binding analysis algorithm**:
  ```python
  def analyze_output_bindings(func, spec):
      """
      Analyze a function to determine what data could be modified.
      Returns list of binding paths like:
      - "instance" (direct parameter)
      - "info->next->session" (nested struct member)
      - "countOutput" (count parameter for array output)
      """
      bindings = []
      for param in func.params:
          if param.pointer and not param.qualifier == "const":
              bindings.extend(analyze_param_bindings(param, spec))
      return bindings
  ```

- [ ] **Add struct member analysis**:
  ```python
  def analyze_struct_outputs(struct, spec):
      """
      Recursively analyze struct members that could be modified.
      Handles nested structs, arrays, and pointer chains.
      """
      outputs = []
      for member in struct.members:
          if member.pointer and not member.qualifier == "const":
              outputs.append(f"{member.name}")
              # Recursively analyze pointed-to struct
              if member.type in spec.structs_index:
                  nested = analyze_struct_outputs(spec.structs_index[member.type], spec)
                  outputs.extend([f"{member.name}->{nested}" for nested in nested])
      return outputs
  ```

### Step 2.2: Enhanced Template Generation System

#### 2.2.1: New Template Structure
- [ ] **Create `client_function.mako`** template for generating client-side function wrappers:
  ```mako
  <%def name="generate_client_function(func, bindings)">
  XrResult ${func.name}(${", ".join(param.full_type() + " " + param.name for param in func.params)}) {
      // Serialize function call
      serialize_function_call(${func.name}_ID, out);
      ${generate_parameter_serialization(func.params)}
      
      // Send request and wait for response
      send_request(out);
      std::istream& response = receive_response();
      
      // Deserialize return value and apply output bindings
      XrResult result;
      deserialize(&result, response);
      ${generate_output_deserialization(bindings)}
      
      return result;
  }
  </%def>
  ```

- [ ] **Create `server_function.mako`** template for generating server-side function handlers:
  ```mako
  <%def name="generate_server_function(func, bindings)">
  void handle_${func.name}(std::istream& request, std::ostream& response) {
      // Deserialize parameters
      ${generate_parameter_deserialization(func.params)}
      
      // Call native OpenXR function
      XrResult result = ${func.name}(${", ".join(param.name for param in func.params)});
      
      // Serialize return value and output bindings
      serialize(&result, response);
      ${generate_output_serialization(bindings)}
  }
  </%def>
  ```

#### 2.2.2: Enhanced Struct Templates
- [ ] **Update `reflection_struct.mako`** to include output binding information:
  ```mako
  <%def name="enumerate_member_with_bindings(member, struct)">
  % if member.is_output_pointer():
  (${member.name}, ${member.full_type()}, OUTPUT_POINTER, \
  ${member.requires_allocation}, ${member.output_bindings})
  % elif member.pointer:
  (${member.name}, ${member.full_type()}, POINTER, \
  ${"true" if member.qualifier == "const" else "false"}, \
  ${member.len if member.len else "1"})
  % else:
  (${member.name}, ${member.full_type()}, PLAIN)
  % endif
  </%def>
  ```

### Step 2.3: In-place Deserialization Strategy

#### 2.3.1: Choose Implementation Approach
- [ ] **Option A: Parameter-based approach** (Recommended)
  ```cpp
  // Add in_place parameter to existing deserializers
  template <typename T>
  static void deserialize(T* x, std::istream& in, bool in_place = false) {
      if (in_place) {
          // Assume memory is already allocated, just read data
          in.read(reinterpret_cast<char*>(x), sizeof(T));
      } else {
          // Allocate memory and deserialize
          // ... existing logic ...
      }
  }
  ```

- [ ] **Option B: Separate in-place functions**
  ```cpp
  template <typename T>
  static void deserialize_in_place(T* x, std::istream& in) {
      // Assume x is already allocated, just read data
      in.read(reinterpret_cast<char*>(x), sizeof(T));
  }
  ```

#### 2.3.2: Implement Pointer Chain Deserialization
- [ ] **Add support for nested pointer deserialization**:
  ```cpp
  template <typename T>
  static void deserialize_ptr_chain(T** x, std::istream& in, bool in_place = false) {
      std::uint32_t marker;
      deserialize(&marker, in);
      
      if (marker > 0) {
          if (in_place) {
              // Assume *x is already allocated
              deserialize_array(*x, marker, in);
          } else {
              // Allocate and deserialize
              *x = new T[marker];
              deserialize_array(*x, marker, in);
          }
      }
  }
  ```

### Step 2.4: Client-Side Function Body Generator

#### 2.4.1: Parameter Serialization Generation
- [ ] **Implement parameter serialization logic**:
  ```python
  def generate_parameter_serialization(params):
      """Generate C++ code to serialize function parameters"""
      serialization_code = []
      for param in params:
          if param.pointer and not param.qualifier == "const":
              # Output pointer - serialize length and data
              serialization_code.append(f"serialize_ptr({param.name}, {param.len or '1'}, out);")
          elif param.pointer:
              # Input pointer - serialize data
              serialization_code.append(f"serialize_array({param.name}, {param.len or '1'}, out);")
          else:
              # Plain parameter - serialize directly
              serialization_code.append(f"serialize(&{param.name}, out);")
      return "\n    ".join(serialization_code)
  ```

#### 2.4.2: Output Deserialization Generation
- [ ] **Implement output binding application**:
  ```python
  def generate_output_deserialization(bindings):
      """Generate C++ code to deserialize and apply output bindings"""
      deserialization_code = []
      for binding in bindings:
          if binding.is_direct_parameter:
              deserialization_code.append(f"deserialize_in_place({binding.path}, response);")
          elif binding.is_nested_struct:
              deserialization_code.append(f"deserialize_struct_in_place({binding.path}, response);")
          elif binding.is_array_output:
              deserialization_code.append(f"deserialize_array_in_place({binding.path}, {binding.count}, response);")
      return "\n    ".join(deserialization_code)
  ```

### Step 2.5: Server-Side Function Handler Generator

#### 2.5.1: Parameter Deserialization
- [ ] **Generate parameter deserialization code**:
  ```python
  def generate_parameter_deserialization(params):
      """Generate C++ code to deserialize function parameters on server"""
      deserialization_code = []
      for param in params:
          if param.pointer and not param.qualifier == "const":
              # Output pointer - allocate and deserialize
              deserialization_code.append(f"deserialize_ptr(&{param.name}, request);")
          elif param.pointer:
              # Input pointer - deserialize data
              deserialization_code.append(f"deserialize_array({param.name}, {param.len or '1'}, request);")
          else:
              # Plain parameter - deserialize directly
              deserialization_code.append(f"deserialize(&{param.name}, request);")
      return "\n    ".join(deserialization_code)
  ```

#### 2.5.2: Output Serialization
- [ ] **Generate output binding serialization**:
  ```python
  def generate_output_serialization(bindings):
      """Generate C++ code to serialize output bindings"""
      serialization_code = []
      for binding in bindings:
          if binding.is_direct_parameter:
              serialization_code.append(f"serialize({binding.path}, response);")
          elif binding.is_nested_struct:
              serialization_code.append(f"serialize_struct({binding.path}, response);")
          elif binding.is_array_output:
              serialization_code.append(f"serialize_array({binding.path}, {binding.count}, response);")
      return "\n    ".join(serialization_code)
  ```

## Phase 3: Runtime Infrastructure

### Step 3.1: Network Communication Layer
- [ ] **Implement client-server communication protocol**:
  ```cpp
  class XrTransportClient {
  public:
      XrResult call_function(uint32_t function_id, std::ostream& request, std::istream& response);
  private:
      void send_request(std::ostream& request);
      std::istream& receive_response();
  };
  ```

### Step 3.2: Function Dispatch System
- [ ] **Create function dispatch table**:
  ```cpp
  using FunctionHandler = void(*)(std::istream&, std::ostream&);
  static std::unordered_map<uint32_t, FunctionHandler> function_handlers = {
      {XRT_FUNCTION_ID_xrCreateInstance, handle_xrCreateInstance},
      {XRT_FUNCTION_ID_xrDestroyInstance, handle_xrDestroyInstance},
      // ... generated for all functions
  };
  ```

### Step 3.3: Memory Management
- [ ] **Implement proper memory cleanup**:
  ```cpp
  class ScopedAllocation {
  public:
      template<typename T>
      ScopedAllocation(T** ptr, size_t count) : ptr_(ptr), count_(count) {}
      ~ScopedAllocation() {
          if (*ptr_) {
              delete[] *ptr_;
              *ptr_ = nullptr;
          }
      }
  private:
      T** ptr_;
      size_t count_;
  };
  ```

## Phase 4: Testing and Validation

### Step 4.1: Generated Test Framework
- [ ] **Create comprehensive test suite**:
  - Unit tests for each generated function
  - Integration tests for client-server communication
  - Memory leak detection
  - Performance benchmarks

### Step 4.2: Validation Tools
- [ ] **Implement validation utilities**:
  - Struct serialization/deserialization round-trip tests
  - Function call equivalence tests
  - Memory usage monitoring

## Implementation Notes

### Key Technical Decisions
1. **Use Option A for in-place deserialization** - simpler to implement and maintain
2. **Generate both client and server code** from the same spec analysis
3. **Maintain backward compatibility** with existing serialization infrastructure
4. **Use strongly typed bindings** to prevent runtime errors

### Performance Considerations
- **Minimize memory allocations** on the client side
- **Use efficient binary serialization** format
- **Batch multiple operations** when possible
- **Cache frequently used struct layouts**

### Error Handling Strategy
- **Validate all pointer chains** before serialization
- **Provide detailed error messages** for debugging
- **Implement graceful degradation** for unsupported operations
- **Add comprehensive logging** for troubleshooting

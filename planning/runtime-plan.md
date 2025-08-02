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
- [ ] Pause for me to write code to generate with straight Python/mako instead of using preprocessor macros
- [ ] Then continue with the next steps

### Step 1.2: Implement Return Data Serialization Strategy
- [ ] Implement code to figure out data bindings that need to be sent back to the client (python code based on parsed spec)
    - The python code should do something like the following: Do a depth first search through struct definitions, collecting a list of bindings that could be modified when running the function on the host (e.g. s->struct_member.some_pointer->pointer_to_data_that_could_be_modified).
    - These bindings will be used in the function bodies to know what to send back to the client when the server executes the command, and on the client to know how to deserialize the data it got from the server.

### Step 1.3: Implement In-place Deserialize Mechanism
- [ ] Pause and help me choose strategy: a) parameter to existing deserialize logic or b) set of new functions
    - Instead of choosing for me, interview me about the pros and cons of each strategy
- [ ] Implement deserialize functions to deserialize in place, assuming the pointers are already allocated, based on the strategy chosen above

### Step 1.4: Plan Generator for Client-side Function Bodies
- [ ] Generate function body template: a) serialize parameters onto output stream, b) wait for response, c) apply result based on bindings chosen in Step 1.2

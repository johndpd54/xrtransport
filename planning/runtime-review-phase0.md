# Phase 0 Review: Function Generation Issues

## Critical Issues Found

### 1. Function ID Duplication ❌
**Problem**: Same function gets different IDs in different extensions
- `xrCreateInstance` appears with IDs: 9, 68, 68, 68, etc.
- This breaks the network protocol which relies on unique function IDs

**Root Cause**: Template generates IDs per extension instead of globally
```mako
% for ext_name in spec.extensions:
% if ext_name != None:
% for i, func in enumerate(ext.functions):
#define XRT_FUNCTION_ID_${func.name} ${len(spec.extensions[None].functions) + i}
% endfor
% endif
% endfor
```

**Fix Needed**: Generate unique IDs across all functions, not per extension

### 2. Parameter Direction Analysis Issues ❌
**Problem**: Parameter classification logic is too simplistic

**Current Logic**:
```mako
${"INPUT" if param.qualifier == "const" else "OUTPUT" if param.pointer and not param.qualifier else "INOUT"}
```

**Issues Found**:
- `XrInstance` parameters marked as `INOUT` when they should be `INPUT`
- `const char*` correctly marked as `INPUT` ✅
- `XrInstance*` correctly marked as `OUTPUT` ✅
- Some parameters misclassified

**Examples**:
- `xrCreateInstance(createInfo, const XrInstanceCreateInfo*, INPUT)` - Correct
- `xrCreateInstance(instance, XrInstance*, OUTPUT)` - Correct
- `xrGetSystem(instance, XrInstance, INOUT)` - **WRONG**, should be `INPUT` (value parameter)
- `xrGetSystem(getInfo, const XrSystemGetInfo*, INPUT)` - Correct
- `xrGetSystem(systemId, XrSystemId*, OUTPUT)` - Correct

### 3. Backslash Syntax Issues ✅ FIXED
**Status**: Resolved with template changes
- Backslashes now properly placed at end of lines
- Macro definitions are syntactically correct

## Required Fixes

### Fix 1: Unique Function IDs
```mako
// Generate unique IDs across all functions
% for i, func in enumerate(all_functions):
#define XRT_FUNCTION_ID_${func.name} ${i}
% endfor
```

### Fix 2: Improved Parameter Analysis
Need more sophisticated logic:
- `const T*` → `INPUT`
- `T*` (non-const pointer) → `OUTPUT` 
- `T` (value type) → `INPUT` (for handles like XrInstance, XrSession, etc.)
- `T` (value type) → `INOUT` (for counters like uint32_t that get modified)
- `T` (value type) → `INPUT` (for enums, flags, etc.)

### Fix 3: Function Deduplication
- Functions can appear in multiple extensions
- Need to ensure each function appears only once in ID generation
- Need to handle function aliases properly

## Questions for Planning

1. **Function Scope**: Should we generate IDs for ALL functions or just core functions?
2. **Parameter Analysis**: Do we need more sophisticated analysis for complex types?
3. **Extension Handling**: How should we handle functions that appear in multiple extensions?
4. **Validation**: How do we validate the generated header compiles correctly?

## Next Steps

1. **Fix function ID generation** to ensure uniqueness
2. **Improve parameter analysis** logic
3. **Add validation** to ensure generated code compiles
4. **Test with simple OpenXR functions** to verify correctness
5. **Only then mark Phase 0 as complete**

## Success Criteria

- [ ] No duplicate function IDs
- [ ] Correct parameter direction analysis
- [ ] Generated header compiles without errors
- [ ] All OpenXR functions properly categorized
- [ ] Function pointer types match OpenXR spec 
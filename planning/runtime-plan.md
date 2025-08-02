# xrtransport Runtime Implementation Plan

## Overview
xrtransport is a **transparent serialization layer** that:
1. Serializes OpenXR calls on the client side
2. Deserializes them on the server side and runs them on the native OpenXR runtime
3. Sends back return values and modified pointer data
4. Applies the results on the client side

**Key Principle**: All state is handled by the native OpenXR runtime on the server. xrtransport is just a transparent network layer.

## Phase 1: Rethink Project Structure and Replan

### Step 1.1: Plan Struct and Function Generation Mechanism
- [ ] Define steps to generate with straight Python/mako instead of using preprocessor macros

### Step 1.2: Determine Return Data Serialization Strategy
- [ ] Outline code structure to figure out which data needs to be sent back to the client (python code based on parsed spec)

### Step 1.3: Plan Implementation for In-place Deserialize Mechanism
- [ ] Choose strategy: a) parameter to existing deserialize logic or b) set of new functions
- [ ] Outline deserialize function structure to deserialize in place, assuming the pointers are already allocated

### Step 1.4: Plan Generator for Client-side Function Bodies
- [ ] Generate function body template: a) serialize parameters onto output stream, b) wait for response, c) apply result

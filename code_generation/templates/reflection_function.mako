#ifndef XRT_REFLECTION_FUNCTION_H
#define XRT_REFLECTION_FUNCTION_H

<%def name="list_function(func)">\
(${func.name}, ${func.type}, ${len(func.params)})
</%def>

<%def name="enumerate_param(param)">\
(${param.name}, ${param.full_type()}, ${"INPUT" if param.qualifier == "const" else "OUTPUT" if param.pointer and not param.qualifier else "INOUT"})
</%def>

// Toggleable lists of functions for each extension
% for ext_name, ext in spec.extensions.items():
% if len(ext.functions) == 0:
#define XRT_FUNCTION_LIST_${ext_name}(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_${ext_name}(_)
% elif ext_name != None:
#ifdef XRT_ENABLE_${ext_name}
#define XRT_FUNCTION_LIST_${ext_name}(_) ${"\\"}
% for func in ext.functions:
    _${list_function(func)} ${"\\" if not loop.last else ""}
% endfor
#define XRT_FUNCTION_LIST_UNAVAILABLE_${ext_name}(_)
#else
#define XRT_FUNCTION_LIST_${ext_name}(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_${ext_name}(_) ${"\\"}
% for func in ext.functions:
    _(${func.name}) ${"\\" if not loop.last else ""}
% endfor
#endif
% endif
% endfor

// List of base functions and all enabled extension functions
#define XRT_FUNCTION_LIST_ALL(_) ${"\\"}
% for func in spec.extensions[None].functions:
    _${list_function(func)} ${"\\"}
% endfor
% for ext_name in spec.extensions:
% if ext_name != None:
    XRT_FUNCTION_LIST_${ext_name}(_) ${"\\" if not loop.last else ""}
% endif
% endfor

// List of all non-enabled extension functions
#define XRT_FUNCTION_LIST_UNAVAILABLE(_) ${"\\"}
% for ext_name in spec.extensions:
% if ext_name != None:
    XRT_FUNCTION_LIST_UNAVAILABLE_${ext_name}(_) ${"\\" if not loop.last else ""}
% endif
% endfor

// Function parameter enumeration
% for ext_name, ext in spec.extensions.items():
% for func in ext.functions:
#define XRT_ENUMERATE_${func.name}(_) ${"\\"}
% for param in func.params:
    _${enumerate_param(param)} ${"\\" if not loop.last else ""}
% endfor
% endfor
% endfor

// Function pointer type definitions
% for ext_name, ext in spec.extensions.items():
% for func in ext.functions:
typedef ${func.type} (XRAPI_PTR *PFN_${func.name})(${", ".join(param.full_type() + " " + param.name for param in func.params)});
% endfor
% endfor

// Function ID enumeration
% for i, func in enumerate(spec.extensions[None].functions):
#define XRT_FUNCTION_ID_${func.name} ${i}
% endfor
% for ext_name in spec.extensions:
% if ext_name != None:
% for i, func in enumerate(ext.functions):
#define XRT_FUNCTION_ID_${func.name} ${len(spec.extensions[None].functions) + i}
% endfor
% endif
% endfor

// Total function count
#define XRT_FUNCTION_COUNT ${sum(len(ext.functions) for ext in spec.extensions.values())}

#endif // XRT_REFLECTION_FUNCTION_H 
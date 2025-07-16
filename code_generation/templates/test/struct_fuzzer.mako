#include "serializer.h"
#include "deserializer.h"

#include <cassert>
#include <cstring>
#include <iostream>

int main() {
    //
    // Struct initialization
    //
<% plans = [struct_generator.generate_plan() for _ in range(100)] %>
% for i, plan in enumerate(plans):
${struct_generator.init_struct(plan, f"item{i}", "    ")}
% endfor

    //
    // Struct comparison
    //
% for i, plan in enumerate(plans):
${struct_generator.compare_struct(plan, f"item{i}", "    ")}
% endfor

    std::cout << "Fuzzer passed" << std::endl;

    return 0;
}
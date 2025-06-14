#include "serializer.h"
#include "deserializer.h"

#include <cassert>
#include <cstring>

int main() {
<% plans = [struct_generator.generate_plan() for _ in range(1000)] %>
% for i, plan in enumerate(plans):
${plan.gen_init(f"item{i}", indent=4)}
% endfor







% for i, plan in enumerate(plans):
${plan.gen_compare(f"item{i}", indent=4)}
% endfor

    return 0;
}
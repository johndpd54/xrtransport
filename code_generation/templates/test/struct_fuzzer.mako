#include "test_serializer.h"
#include "test_deserializer.h"

int main() {
% for i in range(100):
${struct_generator.generate_struct(f"item{i}", indent=4)}
% endfor
    return 0;
}
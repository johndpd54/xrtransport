<%def name="generic_allocator()">
template <typename T>
static void allocate(T** x, std::size_t n) {
    *x = new T[n]();
}
</%def>

<%def name="forward_allocator(struct)">
static void allocate(${struct.name}** s, std::size_t n);
</%def>

<%def name="allocator(struct)">
static void allocate(${struct.name}** s, std::size_t n) {
    *s = new ${struct.name}[n]();
}
</%def>
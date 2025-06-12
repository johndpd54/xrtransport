What I need to do next (6/11/2025): 
Create the lookup tables for the deserializer
Implement the deserializer
Move the count_null_terminated and any other helper methods to a separate header file
Check for nullptr on ALL structs

New overall plan:
Use a way more stateful protocol, see implementation of serializer
Both client and server will need to serialize AND deserialize, so make sure both of these work in both contexts
If getProcAddress gets called on an unimplemented function, log it. I can iteratively see which ones need to be implemented.
Think about having a connection per-thread instead of synchronizing. Maybe try synchronizing first and if it's bad enough try thread-local
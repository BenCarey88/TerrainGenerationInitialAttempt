# TerrainGeneration

These are the initial Vertex, Edge and Face classes for my terrain generation project, set up with pointer attributes to produce a half-edge data structure.
When overloading the equals operator for the Edge and Face classes, I had to take care to avoid the possibility of dereferencing a null pointer, which I did by assigning false automatically if any of the relevant pointers are null.
Thus, I have taken care in the testing to ensure all relevant pointer attributes are assigned before checking equality

This was for my initial handin for the project. I didn't end up using any of these classes in the end, so am keeping the repository just for reference.

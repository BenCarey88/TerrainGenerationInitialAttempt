#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

Vertex::Vertex(std::shared_ptr<Edge> &_edge) : edge(_edge)
{
}

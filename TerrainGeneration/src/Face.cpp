#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

Face::Face(std::shared_ptr<Edge> &_edge) : edge(_edge)
{
}

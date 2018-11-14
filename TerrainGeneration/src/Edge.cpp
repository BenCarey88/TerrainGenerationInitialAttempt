#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

Edge::Edge(std::shared_ptr<Vertex> &_endVertex,
    std::shared_ptr<Edge> &_pairEdge,
    std::shared_ptr<Face> &_face,
    std::shared_ptr<Edge> &_nextEdge)
        : endVertex(_endVertex), pairEdge(_pairEdge), face(_face), nextEdge(_nextEdge)
{
}

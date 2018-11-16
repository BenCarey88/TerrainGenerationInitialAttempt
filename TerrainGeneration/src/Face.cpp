#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

Face::Face(Edge _edge) : edge(std::make_shared<Edge>(_edge))
{
}

bool Face:: operator ==(const Face &_rhs)
{
    if(edge!=NULL && _rhs.edge!=NULL)
        return *edge == *_rhs.edge;
    else return false;
}

void Face::setEdge(const Edge _edge)
{
    edge = std::make_shared<Edge>(_edge);
}
Edge Face::getEdge() const
{
    return *edge;
}

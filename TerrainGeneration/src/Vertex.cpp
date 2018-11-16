#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

Vertex::Vertex(float _x, float _y, float _z) : x(_x), y(_y), z(_z)
{
}

#define Epsilon 0.001f
#define FCompare( a,b ) \
    ( ((a)-Epsilon)<(b) && ((a)+Epsilon>(b)))

bool Vertex::operator ==(const Vertex &_rhs)
{
    return FCompare(x,_rhs.x) && FCompare(y,_rhs.y) && FCompare(z,_rhs.z);
}

void Vertex::setEdge(const Edge _edge)
{
    edge = std::make_shared<Edge>(_edge);
}
Edge Vertex::getEdge() const
{
    return *edge;
}

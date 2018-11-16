#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

Edge::Edge(Vertex _startVertex, Vertex _endVertex) : startVertex(std::make_shared<Vertex>(_startVertex)), endVertex(std::make_shared<Vertex>(_endVertex))
{
}

Edge::Edge(Vertex _startVertex, Vertex _endVertex,Face _face)
   : startVertex(std::make_shared<Vertex>(_startVertex)), endVertex(std::make_shared<Vertex>(_endVertex)), face(std::make_shared<Face>(_face))
{
}

bool Edge::operator ==(const Edge &_rhs)
{
    if (endVertex!=NULL && _rhs.endVertex!=NULL)
        return *endVertex==*_rhs.endVertex;
    else return false;
}

//--------------------------------------------------------------------------
//------------------------------SETTERS-------------------------------------
//--------------------------------------------------------------------------

void Edge::setPairEdge(const Edge _pairEdge)
{
    pairEdge = std::make_shared<Edge>(_pairEdge);
}
void Edge::setNextEdge(const Edge _nextEdge)
{
    nextEdge = std::make_shared<Edge>(_nextEdge);
}
void Edge::setStartVertex(const Vertex _startVertex)
{
    startVertex = std::make_shared<Vertex>(_startVertex);
}
void Edge::setEndVertex(const Vertex _endVertex)
{
    endVertex = std::make_shared<Vertex>(_endVertex);
}
void Edge::setFace(const Face _face)
{
    face = std::make_shared<Face>(_face);
}

//--------------------------------------------------------------------------
//------------------------------GETTERS-------------------------------------
//--------------------------------------------------------------------------

Edge Edge::getPairEdge() const
{
    return *pairEdge;
}
Edge Edge::getNextEdge() const
{
    return *nextEdge;
}
Vertex Edge::getStartVertex() const
{
    return *startVertex;
}
Vertex Edge::getEndVertex() const
{
    return *endVertex;
}
Face Edge::getFace() const
{
    return *face;
}

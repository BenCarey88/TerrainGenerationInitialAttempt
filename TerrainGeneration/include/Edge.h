#ifndef EDGE_H_
#define EDGE_H_

#include <memory>

struct Edge
{
    Edge()=default;
    Edge(struct Vertex _startVertex, struct Vertex _endVertex);
    Edge(struct Vertex _startVertex, struct Vertex _endVertex, struct Face _face);
    Edge(const Edge &)=default;

    std::shared_ptr<struct Vertex> startVertex;
    std::shared_ptr<struct Vertex> endVertex;
    std::shared_ptr<struct Face> face;
    std::shared_ptr<Edge> pairEdge;
    std::shared_ptr<Edge> nextEdge;

    bool operator ==(const Edge &_rhs);

    void setPairEdge(const Edge _pairEdge);
    void setNextEdge(const Edge _nextEdge);
    void setStartVertex(const Vertex _startVertex);
    void setEndVertex(const Vertex _endVertex);
    void setFace(const Face _face);

    Edge getPairEdge() const;
    Edge getNextEdge() const;
    Vertex getStartVertex() const;
    Vertex getEndVertex() const;
    Face getFace() const;
};


#endif

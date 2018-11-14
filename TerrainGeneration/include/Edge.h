#ifndef EDGE_H_
#define EDGE_H_

#include <memory>

struct Edge
{
    Edge()=default;
    Edge(std::shared_ptr<struct Vertex> &_endVertex,
        std::shared_ptr<struct Edge> &_pairEdge,
        std::shared_ptr<struct Face> &_face,
        std::shared_ptr<struct Edge> &_nextEdge);
    Edge(const Edge &)=default;

    std::shared_ptr<struct Vertex> endVertex;
    std::shared_ptr<struct Edge> pairEdge;
    std::shared_ptr<struct Face> face;
    std::shared_ptr<struct Edge> nextEdge;

};


#endif

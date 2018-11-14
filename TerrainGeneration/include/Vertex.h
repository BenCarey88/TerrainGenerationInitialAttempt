#ifndef VERTEX_H_
#define VERTEX_H_

#include <memory>

struct Vertex
{
    Vertex()=default;
    Vertex(std::shared_ptr<struct Edge> &_edge);
    Vertex(const Vertex &)=default;

    float x;
    float y;
    float z;
    std::shared_ptr<struct Edge> edge;
};

#endif

#ifndef VERTEX_H_
#define VERTEX_H_

#include <memory>

struct Vertex
{
    Vertex()=default;
    Vertex(float _x, float _y, float _z);
    Vertex(const Vertex &)=default;

    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    std::shared_ptr<struct Edge> edge;

    bool operator ==(const Vertex &_rhs);

    void setEdge(const Edge _edge);
    Edge getEdge() const;
};

#endif

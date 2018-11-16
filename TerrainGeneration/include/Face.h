#ifndef FACE_H_
#define FACE_H_

#include <memory>

struct Face
{
    Face()=default;
    Face(struct Edge _edge);
    Face(const Face &)=default;

    std::shared_ptr<struct Edge> edge;

    bool operator ==(const Face &_rhs);

    void setEdge(const Edge _edge);
    Edge getEdge() const;
};

#endif

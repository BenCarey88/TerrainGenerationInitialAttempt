#ifndef FACE_H_
#define FACE_H_

#include <memory>

struct Face
{
    Face()=default;
    Face(std::shared_ptr<struct Edge> &_edge);
    Face(const Face &)=default;

    std::shared_ptr<struct Edge> edge;

};

#endif

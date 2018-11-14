#include <iostream>
#include <gtest/gtest.h>
#include "HeightMap.h"
#include "Edge.h"
#include "Vertex.h"
#include "Face.h"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}

TEST(Edge, userCtor)
{
    Vertex V;
    Edge E_pair;
    Edge E_next;
    Face F;
    Edge E(std::make_shared<Vertex>(), std::make_shared<Edge>(), std::make_shared<Face>(), std::make_shared<Edge>());
}

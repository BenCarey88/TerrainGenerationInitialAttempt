#include <iostream>
#include <gtest/gtest.h>
#include "HeightMap.h"
#include "Vertex.h"
#include "Edge.h"
#include "Face.h"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}

//--------------------------------------------------------------------------
//------------------------CONSTRUCTOR-TESTS---------------------------------
//--------------------------------------------------------------------------

TEST(Vertex, userCtor_x_y_z)
{
    Vertex v(0,1,3);
    Vertex w(0,1,3);
    EXPECT_TRUE(v==w);
}

TEST(Edge, userCtor_start_end)
{
    Vertex v_start(0,1,3);
    Vertex v_end(2,3,2);
    Edge e(v_start, v_end);
    EXPECT_TRUE(*e.startVertex == v_start);
    EXPECT_TRUE(*e.endVertex == v_end);
}

TEST(Edge, userCtor_start_end_face)
{
    Vertex v_start(0,1,3);
    Vertex v_end(2,3,2);
    Edge e_next(v_end,Vertex(3,7,7));
    Face f(e_next);
    Edge e(v_start, v_end, f);
    EXPECT_TRUE(*e.startVertex == v_start);
    EXPECT_TRUE(*e.endVertex == v_end);
    EXPECT_TRUE(*e.face == f);
}

TEST(Face, userCtor)
{
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Edge e(v,w);
    Face f(e);
    EXPECT_TRUE(*f.edge==e);
}

//--------------------------------------------------------------------------
//---------------------------SETTER-TESTS-----------------------------------
//--------------------------------------------------------------------------

TEST(Vertex, setters)
{
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Edge e(v,w);
    v.setEdge(e);
    EXPECT_TRUE(*v.edge == e);
}

TEST(Edge, setters)
{
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Vertex u(3,7,7);
    Edge e;
    e.setStartVertex(v);
    e.setEndVertex(w);
    Edge e_next(w,u);
    Edge e_pair(w,v);
    e.setPairEdge(e_pair);
    e.setNextEdge(e_next);
    Face f(e);
    e.setFace(f);
    EXPECT_TRUE(*e.startVertex == v);
    EXPECT_TRUE(*e.endVertex == w);
    EXPECT_TRUE(*e.nextEdge == e_next);
    EXPECT_TRUE(*e.pairEdge == e_pair);
    EXPECT_TRUE(*e.face == f);
}

TEST(Edge, setNextEdge)
{
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Vertex u(3,7,7);
    Edge e(v,w);
    Edge e_next(w,u);
    e.setNextEdge(e_next);
    EXPECT_TRUE(*e.nextEdge == e_next);
}

TEST(Face, setters)
{
    Face f;
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Edge e(v,w);
    f.setEdge(e);
    EXPECT_TRUE(*f.edge == e);
}

//--------------------------------------------------------------------------
//---------------------------GETTER-TESTS-----------------------------------
//--------------------------------------------------------------------------

TEST(Vertex, getters)
{
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Edge e(v,w);
    v.setEdge(e);
    EXPECT_TRUE(v.getEdge() == e);
}

TEST(Edge, getters)
{
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Vertex u(3,7,7);
    Edge e;
    e.setStartVertex(v);
    e.setEndVertex(w);
    Edge e_next(w,u);
    Edge e_pair(w,v);
    e.setPairEdge(e_pair);
    e.setNextEdge(e_next);
    Face f(e);
    e.setFace(f);
    EXPECT_TRUE(e.getStartVertex() == v);
    EXPECT_TRUE(e.getEndVertex() == w);
    EXPECT_TRUE(e.getNextEdge() == e_next);
    EXPECT_TRUE(e.getPairEdge() == e_pair);
    EXPECT_TRUE(e.getFace() == f);
}

TEST(Face, getters)
{
    Face f;
    Vertex v(0,1,3);
    Vertex w(2,3,2);
    Edge e(v,w);
    f.setEdge(e);
    EXPECT_TRUE(f.getEdge() == e);
}

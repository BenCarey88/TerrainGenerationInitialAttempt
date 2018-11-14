TARGET=TerrainGeneration
SOURCES+= src/main.cpp \
          src/Vertex.cpp \
          src/Edge.cpp \
          src/Face.cpp \
          src/HeightMap.cpp

HEADERS+= include/Vertex.h \
          include/Edge.h \
          include/Face.h \
          include/HeightMap.h

INCLUDEPATH+= include
cache()

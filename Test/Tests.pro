TARGET=TerrainGenerationTests
SOURCES+=main.cpp \
         ../TerrainGeneration/src/HeightMap.cpp \
         ../TerrainGeneration/src/Vertex.cpp \
         ../TerrainGeneration/src/Edge.cpp \
         ../TerrainGeneration/src/Face.cpp
LIBS+=-lgtest
INCLUDEPATH+= ../TerrainGeneration/include
cache()

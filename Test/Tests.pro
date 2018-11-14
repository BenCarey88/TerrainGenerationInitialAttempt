TARGET=TerrainGenerationTests
SOURCES+=main.cpp \
         ../TerrainGeneration/src/HeightMap.cpp \

LIBS+=-lgtest
INCLUDEPATH+= ../TerrainGeneration/include
cache()

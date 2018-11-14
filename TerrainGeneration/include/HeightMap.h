#ifndef HEIGHTMAP_H_
#define HEIGHTMAP_H_
#include <cmath>
#include <vector>

class HeightMap
{
public:
    HeightMap()=default;
    HeightMap(const HeightMap &)=default;

    int maxResolution;
    int dimension = std::pow(2,maxResolution/2)+1;
    std::vector<float> heightValues;
    //note that length of vector will be std::pow(dimension,2)
private:

};

#endif

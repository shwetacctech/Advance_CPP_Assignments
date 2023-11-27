#include "Triangle.h"
#include "Triangulation.h"
#include "Geometry.h"
#pragma once
class Smooth
{

public:
    Smooth();
    ~Smooth();
    void  store_incenters(std::vector<Triangle> & triangles);
    void multiply_normal_center(std::vector<Triangle> & triangles,std:: vector<Point3D> &normal);
private:
    
    Triangulation *mTriangulation;
};


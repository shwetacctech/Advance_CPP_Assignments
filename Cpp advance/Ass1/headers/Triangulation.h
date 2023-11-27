#pragma once

#include<vector>

#include"Triangle.h"
#include"BBox.h"

class Triangulation
{
    public:
    Triangulation(std::vector<Triangle>& triangles, std::vector<Point3D>& normals);
    
    ~Triangulation();

    std::vector<Triangle> getTriangles();
    std::vector<Point3D> getNormals();
    Point3D getCenter_bb();
    double getRadiusBB();
    
    private:
    std::vector<Triangle> mTriangles;
    std::vector<Point3D> mNormals;
    BBox mBBox;
};
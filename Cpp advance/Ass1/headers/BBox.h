#pragma once
#include<vector>
#include"Triangle.h"

class BBox{
    public:
    BBox(std::vector<Triangle> triangles);
    ~BBox();
    double radius();
    Point3D center();

    private:
    Point3D mMin;
    Point3D mMax;
    Point3D mCenter;
    double mRadius;

    void calculateBBox(std::vector<Triangle> triangles);
    void compareAndUpdate(Point3D point, Point3D &min, Point3D &max);
};
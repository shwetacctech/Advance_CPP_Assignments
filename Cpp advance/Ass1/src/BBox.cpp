#include<iostream>
#include<string>
#include<cmath>

#include"../headers/BBox.h"


BBox::BBox(std::vector<Triangle> triangles)
: mMin(0,0,0),
  mMax(0,0,0),
  mCenter(0,0,0)
{
    calculateBBox(triangles);
    mRadius = sqrt(pow(mMax.x()-mMin.x(),2) + pow(mMax.y()-mMin.y(),2)+pow(mMax.y()-mMin.y(),2));
}

BBox::~BBox()
{
}

void BBox :: calculateBBox(std::vector<Triangle> triangles)
{
    mMax = Point3D(__DBL_MIN__,__DBL_MIN__,__DBL_MIN__);
    mMin = Point3D(__DBL_MAX__,__DBL_MAX__,__DBL_MAX__);

    for(Triangle triangle : triangles)
    {
        Point3D p1 = triangle.p1();
        Point3D p2 = triangle.p2();
        Point3D p3 = triangle.p3();

        compareAndUpdate(p1,mMin,mMax);
        compareAndUpdate(p2,mMin,mMax);
        compareAndUpdate(p3,mMin,mMax);
        
    }

    mCenter = Point3D((mMax.x() + mMin.x()) / 2, (mMax.y() + mMin.y()) / 2, (mMax.z() + mMax.z()) / 2);

    std::cout<<mMin.x()<<" "<<mMin.y()<<" "<<mMin.z()<<std::endl;
    std::cout<<mMax.x()<<" "<<mMax.y()<<" "<<mMax.z()<<std::endl;
    
}

void BBox :: compareAndUpdate(Point3D point, Point3D &min, Point3D &max)
{
    if(point.x() > max.x())
        max.setX(point.x());
    if(point.y() > max.y())
        max.setY(point.y());
    if(point.z() > max.z())
        max.setZ(point.z());
    
    if(point.x() < min.x())
        min.setX(point.x());
    if(point.y() < min.y())
        min.setY(point.y());
    if(point.z() < min.z())
        min.setZ(point.z());
}
double BBox::radius(){
    return mRadius;
}
Point3D BBox::center(){
    return mCenter;
}
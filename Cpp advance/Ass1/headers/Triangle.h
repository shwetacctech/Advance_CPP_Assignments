#pragma once
#include"Point3D.h"

class Triangle{
    public:
    
    Triangle(Point3D p1, Point3D p2, Point3D p3);
    Point3D p1();
    Point3D p2();
    Point3D p3();
    ~Triangle();
    Point3D centerPoint();
    void setCenterPoint(Point3D nCenter);
    Point3D normal();
    private:
    Point3D mp1, mp2, mp3;
    Point3D mCenterPoint;
    Point3D mNormal;
};
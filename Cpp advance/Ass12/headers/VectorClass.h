#pragma once
#include "Point3D.h"
#include <cmath>
#include <iostream>
class VectorClass : public Point3D
{
public:
    VectorClass(/* args */);
    VectorClass(double inx,double iny,double inz,double inDirX,double inDirY,double inDirZ);
    ~VectorClass();
    double directionX() const; // Get direction X
    double directionY() const; // Get direction Y
    double directionZ() const; // Get direction Z
    double magnitude() const; 
    void setDirection(double inDirX, double inDirY, double inDirZ);
    void printClass() override;
private:
    double mX;
    double mY;
    double mZ;
    double mDirX;
    double mDirY;
    double mDirZ;
};

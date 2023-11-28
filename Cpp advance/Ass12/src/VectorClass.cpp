#include "../headers/VectorClass.h"

VectorClass::VectorClass()
{
}
VectorClass::VectorClass(double inx,double iny,double inz,double inDirX,double inDirY,double inDirZ):
Point3D(inx,iny,inz), mDirX(inDirX), mDirY(inDirY), mDirZ(inDirZ)
{
}

VectorClass::~VectorClass()
{

}
void VectorClass::printClass(){
    std::cout<<"Im the derived class VectorClass"<<std::endl;
}
double VectorClass::directionX() const {
    return mDirX;
}

double VectorClass::directionY() const {
    return mDirY;
}

double VectorClass::directionZ() const {
    return mDirZ;
}

void VectorClass::setDirection(double inDirX, double inDirY, double inDirZ) {
    mDirX = inDirX;
    mDirY = inDirY;
    mDirZ = inDirZ;
}
double VectorClass::magnitude() const {
    double xv = mX; // Access x-coordinate inherited from Point3D
    double yv = mY; // Access y-coordinate inherited from Point3D
    double zv = mZ; // Access z-coordinate inherited from Point3D

    return std::sqrt(xv * xv + yv * yv + zv * zv); // Calculate the magnitude using the formula
}
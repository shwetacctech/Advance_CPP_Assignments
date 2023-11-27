#include"../headers/Triangle.h"

Triangle :: Triangle(Point3D p1,Point3D p2,Point3D p3) 
: mp1(0,0,0),
mp2(0,0,0),
mp3(0,0,0),
mCenterPoint(0,0,0),
mNormal(0, 0, 0)
{
    mp1 = p1;
    mp2 = p2;
    mp3 = p3;
    
    double x= ( mp1.x()+mp2.x()+mp3.x())/3;
    double y= ( mp1.y()+mp2.y()+mp3.y())/3;
    double z= ( mp1.z()+mp2.z()+mp3.z())/3;
    mCenterPoint={x,y,z};
    
    
}

Triangle :: ~Triangle()
{
}

Point3D Triangle :: p1()
{
    return mp1;
}

Point3D Triangle :: p2()

{
    return mp2;
}

Point3D Triangle :: p3()

{
    return mp3;
}
 Point3D Triangle ::centerPoint(){

    return mCenterPoint;

 }
 void Triangle:: setCenterPoint(Point3D nCenter){
    mCenterPoint=nCenter;
 }

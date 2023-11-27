#include"../headers/Triangulation.h"


Triangulation :: Triangulation(std::vector<Triangle> &triangles, std::vector<Point3D> &normal)
:mBBox(triangles),
mNormals(normal)
{
    mTriangles=triangles;
    mNormals=normal;
}

Triangulation :: ~Triangulation()
{
}

std::vector<Triangle> Triangulation :: getTriangles()
{
    return mTriangles;
}

std::vector<Point3D> Triangulation :: getNormals()
{
    return mNormals;
}
Point3D Triangulation :: getCenter_bb()
{
    Point3D center_bb= mBBox.center();

    return center_bb;
}
double Triangulation::getRadiusBB(){
     return mBBox.radius();
}

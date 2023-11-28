#pragma once
#include "Triangulation.h"
#include <list>
#include <deque>
#include <vector>
#include <map>
class Point_Normals
{
private:
    /* data */
public:
    Point_Normals();
    Point_Normals(Triangulation triangulation);
    ~Point_Normals();
    void printNormals();
    void displayPoints();
    void printSequentialContainer(std::list<Point3D>);
    void printSequentialContainer(std::deque<Point3D>);
    void printSequentialContainer(std::vector<Point3D>);
    std::list<Point3D> addListNormal();
    std::deque<Point3D> adddequeNormals();
    std::vector<Point3D> addvectorNormal();

    
private:
    Triangulation mTriangulation;
};


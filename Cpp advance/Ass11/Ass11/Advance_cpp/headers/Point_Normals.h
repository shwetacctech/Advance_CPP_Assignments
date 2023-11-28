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
    void printMapElements(std::map<int,Point3D>);
    std::list<Point3D> addListNormal();
    std::deque<Point3D> adddequeNormals();
    std::vector<Point3D> addvectorNormal();
    std::map<int,Point3D> addPointsTomap(std::list<Point3D>);
    
private:
    Triangulation mTriangulation;
};


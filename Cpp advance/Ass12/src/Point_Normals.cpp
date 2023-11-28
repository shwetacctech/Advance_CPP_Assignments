#include "../headers/Point_Normals.h"
#include "../headers/Triangle.h"
#include <algorithm>
#include <iostream>
#include <list>
#include <deque>
#include <vector>
Point_Normals::Point_Normals()
{
}
Point_Normals::~Point_Normals()
{
}
Point_Normals::Point_Normals(Triangulation triangulation)
{
    mTriangulation = triangulation;
}

void Point_Normals::printNormals()
{
    std::string msg="Printing the normals\nx\ty\tz";
    std::cout<<msg<<std::endl;
    PointList m = mTriangulation.normals();
    for_each(m.cbegin(), m.cend(), [](Point3D i)
             {
                 std::cout << i.x() << " " << i.y() << " " << i.z() << " " << std::endl;
             });
    auto printNormals_lam = [msg="All normals have been printed using Generalized capture"]() mutable
    {
        std::cout<<msg<<std::endl;
    };
    printNormals_lam();
    return;
}

void Point_Normals::displayPoints()
{
    std::cout<<"Printing using iterator"<<std::endl;
    PointList m = mTriangulation.points();
    for (auto p : m)
    {
        std::cout <<"("<< p.x()<< "," << p.y()<<","<< p.z()<<")"<<std::endl;  
    }
}
void Point_Normals::printSequentialContainer(std::list<Point3D> pointList) {
    std::cout << "\nPrinting Point List using list container:\n" << std::endl;
    for (auto point : pointList) {
        std::cout << "Point: (" << point.x() << ", " << point.y() << ", " << point.z() << ")" << std::endl;
    }
}
void Point_Normals::printSequentialContainer(std::deque<Point3D> pointList) {
    std::cout << "Printing Point List using deque container:" << std::endl;
    for (auto point : pointList) {
        std::cout << "Point: (" << point.x() << ", " << point.y() << ", " << point.z() << ")" << std::endl;
    }
}
void Point_Normals::printSequentialContainer(std::vector<Point3D> pointList) {
    std::cout << "Printing Point List using vector container:" << std::endl;
    for (auto point : pointList) {
        std::cout << "Point: (" << point.x() << ", " << point.y() << ", " << point.z() << ")" << std::endl;
    }
}
std::list<Point3D> Point_Normals::addListNormal(){
    std::list<Point3D> listpoints;
    PointList m = mTriangulation.normals();
    for (auto p : m)
    {
        Point3D pl(p.x(),p.y(),p.z());
        listpoints.push_back(pl);
    }
    std::cout<<"Points of vector added into the list container"<<std::endl;
    return listpoints;
}
std::deque<Point3D> Point_Normals::adddequeNormals(){
    std::deque<Point3D> dequepoints;
    PointList m = mTriangulation.normals();
    for (auto p : m)
    {
        Point3D pl(p.x(),p.y(),p.z());
        dequepoints.push_front(pl);
    }
    std::cout<<"Points of vector added into the deque container"<<std::endl;
    return dequepoints;
}
std::vector<Point3D> Point_Normals::addvectorNormal(){
    std::vector<Point3D> vectorpoints;
    PointList m = mTriangulation.normals();
    for (auto p : m)
    {
        Point3D pl(p.x(),p.y(),p.z());
        vectorpoints.push_back(pl);
    }
    std::cout<<"Points of vector added into the vector container"<<std::endl;
    return vectorpoints;
}
std::map<int,Point3D> Point_Normals::addPointsTomap(std::list<Point3D> pointList){
      std::map<int,Point3D> mymap;
      int i=1;
      for(auto p: pointList){
        mymap.emplace(i,p);
        i++;
      }
    return mymap;
}
void Point_Normals::printMapElements(std::map<int,Point3D> mapList){
    std::cout<<"\nPrinting elements of maps\n"<<std::endl;
    for (auto point : mapList) {
    std::cout << point.first << ":  (" << point.second.x() << ", "
              << point.second.y() << ", " << point.second.z() << ")" << std::endl;
}
}
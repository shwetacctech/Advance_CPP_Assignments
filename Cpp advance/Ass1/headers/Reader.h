#pragma once
#include <vector>
#include <string>
#include "Triangle.h"
 
class Reader {
public:
    Reader(std::string filePath);
    ~Reader();
 
    void getTriangles(std::vector<Triangle>& triangles);
    void getNormals(std::vector<Point3D>& normal);
 
private:
    std::string mfilePath;
};
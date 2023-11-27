#include"../headers/Triangle.h"
#include"../headers/Reader.h"

#include <iostream>
#include <sstream>
#include <fstream>
 
Reader::Reader(std::string filePath){
    mfilePath=filePath;
}
 
Reader::~Reader(){}
 
void Reader::getTriangles(std::vector<Triangle>& triangles) {
    std::ifstream dataFile;
    dataFile.open(mfilePath);
 
    if (!dataFile.is_open()) {
        std::cout<<"File not exist"<<std::endl;
        return ;
    }
 
    std::string line;
 
    while (std::getline(dataFile, line, '\n')) {
        
        if (line.find("vertex") != std::string::npos) {
            std::istringstream iss1(line);
            std::string token{};
            float x{}, y{}, z{};
            iss1 >> token >> x >> y >> z;
            Point3D point1(x, y, z);

            
            std::getline(dataFile,line);
            std::istringstream iss2(line);
            iss2 >> token >> x >> y >> z;
            Point3D point2(x, y, z);

            
            std::getline(dataFile,line);
            std::istringstream iss3(line);
            iss3 >> token >> x >> y >> z;
            Point3D point3(x, y, z);

            Triangle triangle(point1, point2, point3);
            triangles.push_back(triangle);
        }
        
    }

    dataFile.close();
}
void Reader::getNormals(std::vector<Point3D> &normal) {
    std::ifstream dataFile;
    dataFile.open(mfilePath);
 
    if (!dataFile.is_open()) {
        std::cout<<"File not exist"<<std::endl;
        return ;
    }
 
    std::string line;
 
    while (std::getline(dataFile, line, '\n')) {
        if (line.find("facet normal") != std::string::npos) {
            std::istringstream iss(line);
            std::string token1;
            float x{}, y{}, z{};
            iss >> token1 >> x >> y >> z;
            
            Point3D point(x*-1, y*-1, z*-1);
            
            normal.push_back(point);
        }
    }

    dataFile.close();
}
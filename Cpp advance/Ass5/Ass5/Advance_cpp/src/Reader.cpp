#include <iostream>
#include <sstream>
#include <fstream>

#include "../headers/Reader.h"
#include "../headers/Triangulation.h"
 
Reader::Reader()
{
}
 
Reader::~Reader()
{
}
void Reader::successMsg(){
     std::cout<<"File Loaded successfully"<<std::endl;
}
void Reader::readSTL(std::string filePath, Triangulation& triangulation)
{
	std::string msg = "File error";
	auto printFileNotFoundError = [&msg]() mutable
    {
        msg = "Error! File Not Found!\nThis is mutable lambda function execution";
        return msg;
    };
    
    
    std::string line;
    Point3D normal(0, 0, 0);
    successMsg();
	std::ifstream dataFile;
    dataFile.open(filePath);
    if (!dataFile.is_open())
    {
        return;
    }
    while (std::getline(dataFile, line))
    {
        if (line.find("facet normal") != std::string::npos)
        {
            std::string token;
            std::string toke;
            std::istringstream iss4(line);
            double x;
			double y;
			double z;
            iss4 >> token >> toke >> x >> y >> z;
            normal = Point3D(x, y, z);
        }
 
        if (line.find("vertex") != std::string::npos)
        {
            std::istringstream iss(line);
            std::string token;
            double x;
			double y;
			double z;
 
            iss >> token >> x >> y >> z;
 
            Point3D point1(x, y, z);
 
            std::getline(dataFile, line);
            std::istringstream iss1(line);
            iss1 >> token >> x >> y >> z;
            Point3D point2(x, y, z);
 
            std::getline(dataFile, line);
            std::istringstream iss2(line);
            iss2 >> token >> x >> y >> z;
            Point3D point3(x, y, z);
 
            triangulation.addTriangle(point1, point2, point3, normal);
        }
    }successMsg();
    dataFile.close();


}

void Reader::readOBJ(std::string filePath, Triangulation& triangulation)
{
	std::ifstream file;
	file.open(filePath);
	if (!file.is_open())
	{
		std::string msg = "File error";
	   auto printFileNotFoundError = [&msg]() mutable
    {
        msg = "Error! File Not Found!\nThis is mutable lambda function execution";
		std::cout<<msg<<std::endl;
        
    };
	printFileNotFoundError();
	return ;
	}
	std::vector<Point3D> points;
	std::vector<Point3D> normals;

	std::string line;
	while (std::getline(file, line))
	{
		if (line.find("o ") != std::string::npos)
		{
			readOBJName(line,triangulation);
		}

		if (line.find("v ") != std::string::npos)
		{
			readOBJVertex(line, points);
		}

		else if (line.find("vn") != std::string::npos)
		{
			readOBJNormal(line, normals);
		}

		else if (line.find("f ") != std::string::npos)
		{
			readOBJFacet(line, points, normals, triangulation);
		}
	}
}

void Reader::readOBJName(std::string line,  Triangulation& triangulation)
{
	std::istringstream nameLine(line);
	std::string token;
	std::string name;

	nameLine >> token >> name;
	triangulation.setName(name);
}

void Reader::readOBJVertex(std::string line, PointList& points)
{
	std::istringstream vertexLine(line);
	std::string token;

	double x;
	double y;
	double z;

	vertexLine >> token >> x >> y >> z;
	points.push_back(Point3D(x, y, z));
}

void Reader::readOBJNormal(std::string line, PointList& normals)
{
    std::istringstream normalLine(line);
    std::string token;

    double x;
    double y;
    double z;

    normalLine >> token >> x >> y >> z;
    normals.push_back(Point3D(x, y, z));
}

void Reader::readOBJFacet(std::string line, PointList& points, PointList& normals, Triangulation& triangulation)
{
	std::istringstream facetLine(line);
	std::string token;

	std::string stringP1;
	std::string stringP2;
	std::string stringP3;

	facetLine >> token >> stringP1 >> stringP2 >> stringP3;
	int indexP1 = stoi(stringP1.substr(0, stringP1.find("/")));
	int indexP2 = stoi(stringP2.substr(0, stringP2.find("/")));
	int indexP3 = stoi(stringP3.substr(0, stringP3.find("/")));

	std::string stringNormal = "";
	for (int i = stringP1.size() - 1; i >= 0; i--)
	{
		if (stringP1.at(i) == '/')
			break;

		stringNormal = stringP1.at(i) + stringNormal;
	}
	int indexNormal = stoi(stringNormal);

	triangulation.addTriangle(points[indexP1-1], points[indexP2-1], points[indexP3-1], normals[indexNormal-1]);
}
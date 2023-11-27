#include<iostream>
#include<vector>
#include "../headers/Smooth.h"
#include"../headers/Reader.h"
#include"../headers/Triangle.h"
#include"../headers/Geometry.h"
#include"../headers/Triangulation.h"
#include"../headers/Writer.h"

int main(){
    std::vector<Triangle> triangles;
    std::vector<Point3D> normals;
    Reader reader("../resource/model.stl");
    reader.getTriangles(triangles);
    reader.getNormals(normals);
    
    Triangulation triangulation(triangles,normals);
    std::cout << triangles.size() << std::endl;

    std::cout<<normals.size()<<std::endl;
    Smooth smooth;
    smooth.multiply_normal_center(triangles,normals);
    
    std::cout << triangles.size() << std::endl;

    std::cout<<normals.size()<<std::endl;

    std::vector<Triangle> outTriangles = triangulation.getTriangles();
    
    Writer writer;
    writer.write("../resource/data.txt",outTriangles);

    return 0;
}
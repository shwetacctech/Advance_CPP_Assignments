#include<fstream>
#include<iostream>

#include"../headers/Writer.h"

Writer::Writer() 
{
}

Writer::~Writer() 
{
}

void Writer::write(std::string filePath, std::vector<Triangle>& triangles){
    std::ofstream file;
    file.open(filePath, std::ios::trunc);
    
    for(Triangle triangle : triangles)
    {
        file << triangle.p1().x()<<" " << triangle.p1().y()<<" " << triangle.p1().z() <<std::endl;
        file << triangle.p2().x()<<" " << triangle.p2().y()<<" " << triangle.p2().z() <<std::endl;
        file << triangle.p3().x()<<" " << triangle.p3().y()<<" " << triangle.p3().z() <<std::endl;
        file << triangle.p1().x()<<" " << triangle.p1().y()<<" " << triangle.p1().z() <<std::endl;
    }

    file.close();
}
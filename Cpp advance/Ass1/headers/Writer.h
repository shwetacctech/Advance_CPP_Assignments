#pragma once

#include<vector>
#include<string>

#include"../headers/Triangle.h"

class Writer{
    public:
    Writer();
    ~Writer();
    void write(std::string filePath,std::vector<Triangle>& triangles);
};
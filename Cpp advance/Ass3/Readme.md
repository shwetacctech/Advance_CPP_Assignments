# Assignment 3: Files Workshop Part One
## Description
This assignment focuses on understanding basic file input/output operations in C++. It covers reading from and writing to files,<br>
handling file streams, and basic file manipulation.

## Contents
File Handling in C++<br>
Basic File Input/Output Operations<br>
Example Demonstrating File Operations<br>

## File Handling in C++
File Streams: C++ provides file stream classes (ifstream, ofstream, fstream) for handling input and output operations with files.<br>
File I/O: File input/output operations involve reading data from files (ifstream) or writing data to files (ofstream).<br>

## Basic File Input/Output Operations
Reading from Files: Use an ifstream object to open and read data from files.<br>
Writing to Files: Use an ofstream object to create or open files for writing and write data to them.<br>
## 
std::ifstream dataFile;<br>
    dataFile.open(filePath);<br>
##
void Writer::writeVertexToSTL(std::ofstream& dataFile, Point3D vertex)<br>
{<br>
    dataFile << "      vertex " << vertex.x() << " " << vertex.y() << " " << vertex.z() << std::endl;<br>
}<br>

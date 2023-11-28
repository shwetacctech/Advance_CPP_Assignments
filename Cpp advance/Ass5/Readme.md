# Assignment 5: Algorithm with Lambda Expression
## Description
This assignment focuses on utilizing the std::for_each algorithm along with lambda expressions in C++.<br>
It explores how to apply a lambda function to each element of a container using std::for_each.

## Contents
Using std::for_each and Lambda Expressions<br>
Usage and Syntax<br>
Example Demonstrating std::for_each with Lambda<br>

## Using std::for_each and Lambda Expressions
std::for_each Algorithm: The std::for_each algorithm applies a function (or lambda) to each element of a container.
Lambda Expressions: Lambda expressions in C++ provide a concise way to create inline functions, including within algorithms like std::for_each.
## Usage and Syntax
Use std::for_each to iterate through the elements of a container.
Provide a lambda expression as the function argument to perform operations on each element.
The lambda syntax within std::for_each is [capture](parameters) { /* code */ }.
##
for_each(m.cbegin(), m.cend(), [](Point3D i)<br>
             {<br>
                 std::cout << i.x() << " " << i.y() << " " << i.z() << " " << std::endl;<br>
             });<br>

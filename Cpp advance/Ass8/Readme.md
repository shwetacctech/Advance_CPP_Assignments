# ****Assignment 8: Algorithms and Iterators Workshop****
## **Description**
This assignment focuses on understanding and applying algorithms and iterators in C++. It explores the use of standard algorithms provided by 
the Standard Template Library (STL) and the usage of iterators for data manipulation and processing.

## **Contents**
About Algorithms and Iterators
Usage and Characteristics
Example Usage
How to Run the Examples
About Algorithms and Iterators
Algorithms: Algorithms in C++ are reusable functions used to perform specific tasks on collections of elements. They are provided by the STL 
and operate on data structures such as vectors, lists, etc.

## **Iterators:** 
Iterators are objects used to traverse and manipulate elements within a container. They act as pointers pointing to elements in a
sequence and provide a way to access elements in a container.

## **Usage and Characteristics**
**Algorithms:**<br>
STL provides a rich set of algorithms like sort, find, transform, etc.<br>
They perform operations on elements within containers and can take iterators as arguments.<br>
**Iterators:**<br>
Different types of iterators (e.g., begin, end, const_iterator) allow various operations on containers.<br>
They support movement through containers and provide access to elements.<br>
##
for (auto p : m)<br>
    {
        std::cout <<"("<< p.x()<< "," << p.y()<<","<< p.z()<<")"<<std::endl;<br>  
    }
for (auto p : m)<br>
    {
        Point3D pl(p.x(),p.y(),p.z());<br>
        listpoints.push_back(pl);<br>
    }<br>

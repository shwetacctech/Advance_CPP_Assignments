# **Assignment 9: Sequential Containers**
## **Description**
This assignment aims to explore and understand three different sequential containers available in C++: list, deque, and vector. These containers provide different capabilities and trade-offs in terms of their internal data structures and functionalities.

## **Contents**
About list, deque, and vector
Usage and Characteristics
Example Usage
How to Run the Examples

## **About list, deque, and vector**
list: A doubly-linked list that allows efficient insertion and deletion anywhere in the sequence.
deque (Double-Ended Queue): A double-ended queue that allows insertion and deletion at both ends.
vector: A dynamic array that provides fast random access and efficient insertion/deletion at the end.
Usage and Characteristics
list:
Efficient for frequent insertion/deletion at any position.
Iterators remain valid after insertion/deletion.
deque:
Efficient for insertion/deletion at both ends.
Random access is slower compared to vectors.
vector:
Provides fast random access to elements.
Efficient for appending elements at the end.
std::list<Point3D> Point_Normals::addListNormal(){<br>
    std::list<Point3D> listpoints;<br>
    PointList m = mTriangulation.normals();<br>
    for (auto p : m)<br>
    {
        Point3D pl(p.x(),p.y(),p.z());<br>
        listpoints.push_back(pl);<br>
    }<br>
    std::cout<<"Points of vector added into the list container"<<std::endl;<br>
    return listpoints;<br>
}
std::deque<Point3D> Point_Normals::adddequeNormals(){<br>
    std::deque<Point3D> dequepoints;<br>
    PointList m = mTriangulation.normals();<br>
    for (auto p : m)<br>
    {
        Point3D pl(p.x(),p.y(),p.z());<br>
        dequepoints.push_front(pl);<br>
    }<br>
    std::cout<<"Points of vector added into the deque container"<<std::endl;<br>
    return dequepoints;<br>
}<br>
std::vector<Point3D> Point_Normals::addvectorNormal(){<br>
    std::vector<Point3D> vectorpoints;<br>
    PointList m = mTriangulation.normals();<br>
    for (auto p : m)<br>
    {<br>
        Point3D pl(p.x(),p.y(),p.z());<br>
        vectorpoints.push_back(pl);<br>
    }<br>
    std::cout<<"Points of vector added into the vector container"<<std::endl;<br>
    return vectorpoints;<br>
}<br>

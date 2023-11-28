****Assignment 9: Sequential Containers** **
**Description**
This assignment aims to explore and understand three different sequential containers available in C++: list, deque, and vector. These containers provide different capabilities and trade-offs in terms of their internal data structures and functionalities.

**Contents**
About list, deque, and vector
Usage and Characteristics
Example Usage
How to Run the Examples

**About list, deque, and vector**
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
std::list<Point3D> Point_Normals::addListNormal(){
    std::list<Point3D> listpoints;
    PointList m = mTriangulation.normals();
    for (auto p : m)
    {
        Point3D pl(p.x(),p.y(),p.z());
        listpoints.push_back(pl);
    }
    std::cout<<"Points of vector added into the list container"<<std::endl;
    return listpoints;
}
std::deque<Point3D> Point_Normals::adddequeNormals(){
    std::deque<Point3D> dequepoints;
    PointList m = mTriangulation.normals();
    for (auto p : m)
    {
        Point3D pl(p.x(),p.y(),p.z());
        dequepoints.push_front(pl);
    }
    std::cout<<"Points of vector added into the deque container"<<std::endl;
    return dequepoints;
}
std::vector<Point3D> Point_Normals::addvectorNormal(){
    std::vector<Point3D> vectorpoints;
    PointList m = mTriangulation.normals();
    for (auto p : m)
    {
        Point3D pl(p.x(),p.y(),p.z());
        vectorpoints.push_back(pl);
    }
    std::cout<<"Points of vector added into the vector container"<<std::endl;
    return vectorpoints;
}

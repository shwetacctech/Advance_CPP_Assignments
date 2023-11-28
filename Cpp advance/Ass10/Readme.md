# Assignment 10: Sequential Containers Part Two
## **Description**
This assignment focuses on understanding and implementing the concept of nested sequential containers in C++. 
It involves storing objects of container types within other container objects.

## **Contents**
Nested Containers
Usage
Example
How to Run the Example
Nested Containers
In C++, nested containers refer to the practice of storing container objects inside other container objects. This can involve using sequential containers like vectors, lists, or deques, and storing them within another sequential container.

## **Usage**
Nested containers enable the creation of complex data structures where a container holds elements, and those elements are themselves containers.
They allow for flexible storage and organization of data by providing multiple levels of nesting.
Common operations include adding, accessing, and manipulating elements in the nested containers.<br>
std::list<Point3D> Point_Normals::addListNormal(){<br>
    std::list<Point3D> listpoints;<br>
    PointList m = mTriangulation.normals();<br>
    for (auto p : m)<br>
    {
        Point3D pl(p.x(),p.y(),p.z());<br>
        listpoints.push_back(pl);<br>
    }
    std::cout<<"Points of vector added into the list container"<<std::endl;<br>
    return listpoints;
}
std::deque<Point3D> Point_Normals::adddequeNormals(){<br>
    std::deque<Point3D> dequepoints;<br>
    PointList m = mTriangulation.normals();<br>
    for (auto p : m)<br>
    {
        Point3D pl(p.x(),p.y(),p.z());<br>
        dequepoints.push_front(pl);
    }
    std::cout<<"Points of vector added into the deque container"<<std::endl;<br>
    return dequepoints;<br>
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
void Point_Normals::printSequentialContainer(std::list<Point3D> pointList) {
    std::cout << "\nPrinting Point List using list container:\n" << std::endl;
    for (auto point : pointList) {
        std::cout << "Point: (" << point.x() << ", " << point.y() << ", " << point.z() << ")" << std::endl;
    }
}
void Point_Normals::printSequentialContainer(std::deque<Point3D> pointList) {
    std::cout << "Printing Point List using deque container:" << std::endl;
    for (auto point : pointList) {
        std::cout << "Point: (" << point.x() << ", " << point.y() << ", " << point.z() << ")" << std::endl;
    }
}
void Point_Normals::printSequentialContainer(std::vector<Point3D> pointList) {
    std::cout << "Printing Point List using vector container:" << std::endl;
    for (auto point : pointList) {
        std::cout << "Point: (" << point.x() << ", " << point.y() << ", " << point.z() << ")" << std::endl;
    }
}

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
/nCommon operations include adding, accessing, and manipulating elements in the nested containers.
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

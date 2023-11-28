**Assignment 11: Maps**
**Description**
This assignment focuses on understanding and implementing the concept of maps in C++. Maps are associative containers that store elements in key-value pairs, 
allowing efficient lookup and retrieval based on keys.

**Contents**
What are Maps?
Usage
Example
How to Run the Example
**What are Maps?**
In C++, std::map is a part of the Standard Template Library (STL) and is implemented as a sorted associative container. 
Maps store elements in a sorted order based on keys, allowing for quick retrieval of elements using keys.

**Usage**
Maps consist of key-value pairs where each unique key maps to a specific value.
They use a tree-based data structure (usually a red-black tree) to ensure log-time search complexity.
Common operations include inserting, accessing, and erasing elements using keys.

std::map<int,Point3D> Point_Normals::addPointsTomap(std::list<Point3D> pointList){
      std::map<int,Point3D> mymap;
      int i=1;
      for(auto p: pointList){
        mymap.emplace(i,p);
        i++;
      }
    return mymap;
}
void Point_Normals::printMapElements(std::map<int,Point3D> mapList){
    std::cout<<"\nPrinting elements of maps\n"<<std::endl;
    for (auto point : mapList) {
    std::cout << point.first << ":  (" << point.second.x() << ", "
              << point.second.y() << ", " << point.second.z() << ")" << std::endl;
}
}

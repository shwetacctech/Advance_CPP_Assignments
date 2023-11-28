#include <iostream>

#include "./headers/Triangulation.h"
#include "./headers/Reader.h"
#include "./headers/Writer.h"
#include "./headers/Point_Normals.h"
#include "./headers/VectorClass.h"
void print_class(Point3D pobj) {
    pobj.printClass();
}
int main()
{
    Triangulation triangulation;

    std::cout << "           Welcome to Translator Application       " << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "1. OBJ to STL file format" << std::endl;
    std::cout << "2. STL to OBJ file format" << std::endl;
    std::cout << "3.Inheritance implementation" << std::endl;
    int option{};
    std::cin >> option;
    switch (option)
    {
        case 1:
        {
            Reader reader;
            reader.readOBJ("resources\\cube.obj", triangulation);
            Point_Normals pn(triangulation);
            pn.printNormals();
            pn.displayPoints();
            std::list<Point3D>normallist =pn.addListNormal();
            pn.printSequentialContainer(normallist);
            std::map<int,Point3D>mymap=pn.addPointsTomap(normallist);
            pn.printMapElements(mymap);
            Writer writer;
            writer.writeObjToStl("output\\outputSTL.stl", triangulation);
            break;
        }
        case 2:
        {
            Reader read;
            read.readSTL("resources/cubeModel.stl", triangulation);
            Writer writer(triangulation);
            writer.writeStlToObj("output\\outputObj.obj");
            break;
        }
        case 3:
        {
            Point3D p(1.0,2.0,3.0);
            p.printClass();
            VectorClass v(p.x(),p.y(),p.z(),1.3,1.5,1.4);
            v.printClass();
            std::cout<<"\nPrintClass"<<std::endl;
            print_class(p);
            print_class(v);
            
        }
    }
    return 0;
}
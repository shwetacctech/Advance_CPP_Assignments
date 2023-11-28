**Assignment 12: Virtual Functions**
**Description**
This assignment focuses on understanding and implementing virtual functions in C++. Virtual functions enable runtime polymorphism by allowing the selection of appropriate functions to be executed based on the object's runtime type.

**Contents******
What are Virtual Functions?
Usage
Example
**What are Virtual Functions?**
In C++, a virtual function is a member function in a base class that is redefined in a derived class. These functions are declared with the virtual keyword in the base class. They enable dynamic binding, allowing the selection of the appropriate function to be executed based on the object's actual type at runtime.

**Usage**
Use the virtual keyword in the base class to declare a function as virtual.
Override the virtual function in the derived class using the override keyword.
Virtual functions allow polymorphism, enabling the derived class to provide its specific implementation of the function.

**Example**
virtual void printClass();
void printClass() override;
void print_class(Point3D pobj) {
    pobj.printClass();
}
 Point3D p(1.0,2.0,3.0);
 p.printClass();
 VectorClass v(p.x(),p.y(),p.z(),1.3,1.5,1.4);
 v.printClass();
 std::cout<<"\nPrintClass"<<std::endl;
 print_class(p);
 print_class(v);
The printClass() method is declared as virtual in the Point3D class and overridden in the VectorClass class.
The print_class() function accepts a reference to a Point3D object and uses polymorphism to invoke the appropriate printClass() method based on the actual object type passed (either Point3D or VectorClass).

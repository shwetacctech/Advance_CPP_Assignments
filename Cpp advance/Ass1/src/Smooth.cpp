#include "../headers/Smooth.h"
#include "../headers/BBox.h"
#include <cmath>
Smooth::Smooth():
mTriangulation(nullptr){

}

Smooth::~Smooth(){

}
void multiply_normal_center(std::vector<Triangle> & triangles,std:: vector<Point3D> &normal){
    BBox bbox(triangles);
    // double radius_c=bbox.radius();
    Point3D center_ = bbox.center();

    double radius_b = bbox.radius();
    std::vector<Point3D> n_normal;
    //std::vector<Point3D> normal_unified;
    int j=0;

    for(Point3D u :normal){
        double ux=normal[j].x();
        double uy=normal[j].y();
        double uz=normal[j].z();
        double length=sqrt(ux*ux+uy*uy+uz*uz);
        ux=ux/length;
        uy=uy/length;
        uz=uz/length;
        Point3D u_normal(ux,uy,uz);
        n_normal.push_back(u_normal);
        normal[j]=n_normal[j];
        j++;

    }
    
    
    int i=0;

    for(Triangle triangle: triangles){
        std::vector<Triangle> nTriangles;
        Point3D center=triangle.centerPoint();
        double d = sqrt(pow(center.x()-center_.x(),2)+pow(center.y()-center_.y(),2)+pow(center.z()-center_.z(),2));
        double d_r=radius_b-d;
        double center_x=center.x()+(d_r* normal[i].x());
        double center_y=center.y()+(d_r* normal[i].y());
        double center_z=center.z()+(d_r* normal[i].z());
        Point3D P_C(center_x,center_y,center_z);
        triangle.setCenterPoint(P_C);
        Point3D a= triangle.p1();
        Point3D b= triangle.p2();
        Point3D c= triangle.p3();
        Triangle n_triangle1(a,b,P_C);
        Triangle n_triangle2(a,P_C,c);
        Triangle n_triangle3(P_C,b,c);
        triangles.push_back(n_triangle1);
        triangles.push_back(n_triangle2);
        triangles.push_back(n_triangle3);

        i++; 

    }

    
    
    
}

        

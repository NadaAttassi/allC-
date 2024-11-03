#include "Point3D.h"

#include <cmath>
#include <iostream>


Point3D::Point3D():x(0),y(0),z(0)
{
}

Point3D::Point3D(int a, int b,int c) :x(a), y(b),z(c)
{
}



void Point3D::modifier(int a, int b,int c)
{
    this->x = a;
    this->y = b;
    this->z = c;
}


// Surcharge de l'opérateur - pour soustraire deux points
Point3D* Point3D::operator-(const Point3D& pt) const {
    return new Point3D(this->x - pt.x, this->y - pt.y, this->z - pt.z);
}


float Point3D::distance() const
{
    return sqrt(x * x + y * y+ z*z);

}

void Point3D::afficher() const
{
    std::cout << "X: " << this->x << std::endl;
    std::cout << "Y: " << this->y << std::endl;
    std::cout << "Z: " << this->z << std::endl;
    std::cout << "*********************** " << std::endl;



}


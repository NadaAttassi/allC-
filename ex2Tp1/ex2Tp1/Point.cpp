#include "Point.h"
#include <cmath>
#include <iostream>


Point::Point(int a, int b):x(a),y(b)
{
}

bool Point::operator==(const Point& pt) const
{

    return (this->x==pt.x && this->y==pt.y);
}

void Point::modifier(int a, int b)
{
    this->x = a;
    this->y = b;
}


// Surcharge de l'op�rateur - pour soustraire deux points
Point* Point::operator-(const Point& pt) const {
    return new Point(this->x - pt.x, this->y - pt.y);
}

// Surcharge de l'op�rateur + pour additionner deux points
Point* Point::operator+(const Point& pt) const {
    return new Point(this->x + pt.x, this->y + pt.y);
}

// Surcharge de l'op�rateur ^ pour �lever chaque coordonn�e au carr�
Point* Point::operator^(const int a) const {
    return new Point(pow(this->x, a), pow(this->y, a));
}

float Point::norme()
{
    return sqrt(x*x+y*y);

}

void Point::afficher()
{
    std::cout << "X: " << this->x << std::endl;
    std::cout << "Y: " << this->y << std::endl;


}


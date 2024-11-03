#include "Complexe.h"
#include <iostream>
Complexe::Complexe(double r, double i):Re(r),img(i)
{
}

void Complexe::afficher()
{
    std::cout << "reele: " << this->Re;
    std::cout << "Imaginaire: " << this->img;
}

double Complexe::module()
{
    return sqrt(pow(Re,2)+pow(img,2));
}

Complexe* Complexe::conjugue()
{
    return new Complexe(Re,-img);
}

Complexe* Complexe::operator+(const Complexe& nw)
{
    return new Complexe(this->Re+nw.Re,this->img+nw.img);
}

Complexe* Complexe::operator+(double a)
{
    return new Complexe(this->Re + a, this->img );

}

Complexe* Complexe::operator*(const Complexe& nw)
{
    return new Complexe(this->Re * nw.Re, this->img * nw.img );

}

Complexe* Complexe::operator*(double a)
{
    return new Complexe(this->Re *a, this->img);

}

Complexe* Complexe::operator-(const Complexe& nw)
{
    return new Complexe(this->Re - nw.Re, this->img - nw.img);

}

Complexe* Complexe::operator-(double a)
{
    return new Complexe(this->Re * a, this->img );

}

Complexe* Complexe::operator/(const Complexe& nv)
{
    if (nv.Re != 0 && nv.img != 0) {
        return new Complexe(this->Re / nv.Re, this->img / nv.img);

    }
    std::cout << "n peut pas deviser par 0\n";
}

Complexe* Complexe::operator/(double a)
{

    if (a != 0) {
        return new Complexe(this->Re / a, this->img / a);

    }
}

bool Complexe::operator==(const Complexe& nv)
{
    return (this->Re == nv.Re && this->img == nv.img);
}

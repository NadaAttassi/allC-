#include "cercle.h"
#include "Point.h"
#include <cmath>
#include <iostream>
float Cercle::pi = 3.14;

Cercle::Cercle(float r, Point* p) :rayon(r),pt(p)

{
	this->surface = 0;
	this->per = 0;
}



Cercle* Cercle::creer(float r, Point* p)
{
	return new Cercle(r, p);
}

void Cercle::modifier(float r)
{
	this->rayon = r;
}

void Cercle::translater(int a, int b)
{
	this->pt->modifier(a, b);
}

void Cercle::calculer_surface()
{
	this->surface = pow(rayon, 2) * pi;
}

void Cercle::calculer_perimetre()
{
	this->per = 2 * pi * rayon;
}

bool Cercle::egal(Cercle* c2)
{
	if (*this->pt == *c2->pt) {
		return true;
	}
	return false;
}

bool Cercle::apartenance(Point* p1)
{
	Point* P2 = new Point(0, 0);
	P2 = *p1 - *this->pt;
	float distance =P2->norme();
	return(distance <= rayon);
}

void Cercle::afficher()
{
	std::cout<< "Rayon: " << rayon << std::endl;
	this->pt->afficher();
	std::cout << "Surface: " << surface << std::endl;
	std::cout << "Perimetre: " << per << std::endl;
	std::cout << "*************";
}

#include "Losange.h"


int Losange::counter = 0;
Losange::Losange():Forme("Losange"),d1(0),d2(0)
{
	this->sommets = new Point3D * [4];
	for (int i = 0; i < 4; i++) {
		this->sommets[i] = nullptr;
	}
}

void Losange::ajouterPt(Point3D* pt)
{
	if(counter < 4) {
		this->sommets[counter++] = pt;
	}
}

void Losange::surface()
{
	Point3D* temp= *this->sommets[2] - *this->sommets[0];
	Point3D* temp2= *this->sommets[3] - *this->sommets[1];
	this->d1 = temp->distance();
	this->d2 = temp2->distance();
	this->surf = (d1 * d2) / 2;
	
}

void Losange::afficher() const
{
	std::cout << "les informatons de losange *********:" << std::endl;
	
	for (int i = 0; i < counter; i++) {
		this->sommets[i]->afficher();
	}
	std::cout << "diametre1 :" << this->d1<< std::endl;
	std::cout << "diametre2 :" << this->d2<< std::endl;
	std::cout << "Surface :" << this->surf<< std::endl;
}

Losange::~Losange()
{
	for (int i = 0; i < 4; i++) {
		delete this->sommets[i];
	}
	delete[] this->sommets;
}

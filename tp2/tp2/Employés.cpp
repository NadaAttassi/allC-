#include "Employ�s.h"
#include <iostream>

Employ�s::Employ�s(double a, int b, int c) : identifiant(a), tauxH(b), nombreH(c)

{
	this->salaire = 0;
}

void Employ�s::calculer_salaire() 
{
	this->salaire=this->nombreH * this->tauxH;
}

void Employ�s::afficher() const
{
	std::cout << "salaire:" << this->salaire;
}

Employ�s::~Employ�s()
{
}

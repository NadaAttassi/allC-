#include "Employés.h"
#include <iostream>

Employés::Employés(double a, int b, int c) : identifiant(a), tauxH(b), nombreH(c)

{
	this->salaire = 0;
}

void Employés::calculer_salaire() 
{
	this->salaire=this->nombreH * this->tauxH;
}

void Employés::afficher() const
{
	std::cout << "salaire:" << this->salaire;
}

Employés::~Employés()
{
}

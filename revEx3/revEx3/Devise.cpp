#include "Devise.h"

Devise::Devise(double sl, std::string cd):solde(sl),code(cd)
{
}

Devise::~Devise()
{
}

void Devise::operator+=(const Devise& dv)
{
	this->solde += dv.solde;
}

void Devise::operator-=(const Devise& dv)
{
	this->solde -= dv.solde;
}

void Devise::printMontant() const
{
	std::cout << this->solde <<" " << this->code << std::endl;
}

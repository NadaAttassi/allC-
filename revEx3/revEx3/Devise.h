#pragma once
#include <iostream>
class Devise
{
protected:
	std::string code;
	double solde;
public:
	Devise(double sl, std::string cd);
	~Devise();
	void operator += (const Devise & dv );
	void operator -= (const Devise & dv );
	void printMontant() const;
	virtual Devise* converTo(std::string) = 0;
};


#include "Euro.h"
float Euro::tauxMad=0.11;
float Euro::tauxDol=0.11;

Euro::Euro(double amount):Devise(amount,"Eur")
{

}

Devise* Euro::converTo(std::string cd)
{
	if (this->code == cd) {
		return this;
	}
	else if (this->code == "MAD") {
		return(new MAD(this->solde * tauxMad));
	}
	else if (this->code == "DOL") {
		return(new Dol(this->solde * tauxDol));
	}
	return nullptr;
}

#include "MAD.h"
#include "Euro.h"
float MAD::tauxEuro = 1;
float MAD::tauxDol = 1;
MAD::MAD(double amount):Devise(amount,"MAD")
{
}

Devise* MAD::converTo(std::string cd)
{
    if (this->code == cd) {
        return this;
    }
    else if (this->code == "EUR") {
        return new Euro(this->tauxEuro * this->solde);

    }
    else if (this->code == "DOL") {
        return new Dol(this->tauxDol * this->solde);
    }
    return nullptr;
}

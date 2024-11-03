#pragma once
#include "Devise.h"
class MAD :
    public Devise
{
private:
    static float tauxEuro;
    static float tauxDol;
public:
    MAD(double amount);
    Devise* converTo(std::string)override;

};


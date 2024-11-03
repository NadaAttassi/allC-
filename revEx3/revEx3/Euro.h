#pragma once
#include "Devise.h"
#include "MAD.h"
class Euro :
    public Devise
{
private:
   static float tauxMad;
   static float tauxDol;
public:
    Euro(double amount);
    Devise* converTo(std::string)override;
   
};


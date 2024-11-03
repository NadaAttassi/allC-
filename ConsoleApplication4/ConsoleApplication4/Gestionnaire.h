#pragma once
#include "Employes.h"

class Gestionnaire :
    public Employes
{
private:
    float salaireheb;
public:
    Gestionnaire(std::string nm, std::string prenom, float taux, int heure,float salaireh);
    void calculer() override;
};


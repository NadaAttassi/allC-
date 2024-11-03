#pragma once
#include "Employes.h"
class Agent :
    public Employes
{
private:
    float indemnités; 
    int total_ventes;
    float comission;
public:
    Agent(std::string nm, std::string prenom, float taux, int heure,int total,float com);
    void calculer() override;
};


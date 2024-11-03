#pragma once
#include "Employés.h"
class Gestionnaires :
    public Employés
{
private:
    double salaire_hebd;
public:
    Gestionnaires(double salaire_hebd, double id, int tauxH,int nH);
    void calculer_salaire() override;
    ~Gestionnaires();
};


#pragma once
#include "Employ�s.h"
class Gestionnaires :
    public Employ�s
{
private:
    double salaire_hebd;
public:
    Gestionnaires(double salaire_hebd, double id, int tauxH,int nH);
    void calculer_salaire() override;
    ~Gestionnaires();
};


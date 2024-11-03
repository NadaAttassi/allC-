#include "Gestionnaires.h"



Gestionnaires::Gestionnaires(double salaire_hebd, double id, int tauxH, int nH):salaire_hebd(salaire_hebd),Employés(id,tauxH,nH)

{

}

void Gestionnaires::calculer_salaire()
{
	Employés::calculer_salaire();
	this->salaire += this->salaire_hebd * 4;
}

Gestionnaires::~Gestionnaires()
{
}

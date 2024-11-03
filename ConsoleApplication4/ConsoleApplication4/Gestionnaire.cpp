#include "Gestionnaire.h"
#include "Employes.h"
#include <iostream>

Gestionnaire::Gestionnaire(std::string nm, std::string prenom, float taux, int heure, float salaireh):Employes(nm, prenom, taux, heure),salaireheb(salaireh)
{
}

void Gestionnaire::calculer()
{
   //Employes::calculer();
	this->salaire += this->salaireheb;

}

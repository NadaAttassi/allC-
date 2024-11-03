#pragma once
#include "Employes.h"
class Entreprise
{
private:
	std::string nom;
	Employes** ensemble_empl;
	 int capacités;
	 int counter;
	 std::string total;
public:
	Entreprise(std::string name,int number);
	void ajouter(Employes* em);
	void resize();
	void calculer_total();
	void details_entreprise();

};


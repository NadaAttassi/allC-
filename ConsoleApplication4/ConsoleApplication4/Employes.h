#pragma once
#include <iostream>
class Employes
{
protected:
	static int compteur;
	int matricule;
	std::string nom;
	std::string prenom;
	float salaire;
	float tauxH;
	int nbrH;
public:
	Employes(std::string nm, std::string prenom, float taux, int heure);
	virtual void calculer();
	void operator += (const Employes& em);
	void afficher() const;
	std::string toString();
};


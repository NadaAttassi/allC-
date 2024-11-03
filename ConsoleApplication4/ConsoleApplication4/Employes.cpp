#include "Employes.h"

#include <iostream>

#include <string>
int Employes::compteur = 0;
Employes::Employes(std::string nm, std::string prenom, float taux, int heure):nom(nm),prenom(prenom),tauxH(taux),nbrH(heure),matricule(++compteur),salaire(0)
{
	this->calculer();
}

void Employes::calculer()
{
	this->salaire = this->tauxH * this->nbrH;
}

void Employes::operator+=(const Employes& em)
{
	this->salaire += em.salaire;
}

void Employes::afficher() const
{
	std::cout << "Matricule: " << this->matricule << std::endl;
	std::cout << "Nom: " << this->nom << std::endl;
	std::cout << "Prenom: " << this->prenom << std::endl;
	std::cout << "Salaire: " << this->salaire << "DH" << std::endl;
}

std::string Employes::toString()
{
	return std::to_string(this->salaire);

}

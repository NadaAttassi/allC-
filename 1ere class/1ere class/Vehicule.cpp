#include "Vehicule.h"

#include <iostream>
using namespace std;
#include "Vehicule.h";
Vehicule::Vehicule(Vehicule& P)
{
	this->id = P.id;
	this->marque = P.marque;
	this->vitesse = P.vitesse;

}
void Vehicule::afficher()
{
	cout << "La Marque: " << this->marque << "\n La vitesse: " << this->vitesse 
		<< "\n L ID: " << this->id << "\n ************************************";
}

void Vehicule::freiner()
{
	this->vitesse = 0;
	
}

void Vehicule::avancer()
{
	this->vitesse = this->vitesse + 1;
	
}

Vehicule::Vehicule(int id, string mq, int vitesse)
{
	this->id = id;
	this->marque = mq;
	this->vitesse = vitesse;
}



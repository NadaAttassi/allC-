#include "Entreprise.h"
#include "Employes.h"
#include <string.h>
Entreprise::Entreprise(std:: string name,int number) :capacités(number), counter(0),total(""),nom(name)
{
	int i;
	this->ensemble_empl = new Employes * [this->capacités];
	for (i = 0; i < this->capacités; i++) {
		ensemble_empl[i] = nullptr;
	}
}

void Entreprise::ajouter(Employes* em)
{
	if (this->capacités==this->counter){
		this->resize();
	}else{
	this->ensemble_empl[this->counter++] = em;
	}
	
}

void Entreprise::resize()
{
	this->capacités *= 2;
	Employes** newtable = new Employes * [this->capacités];

	for (int i = 0; i < this->counter; i++) {
		newtable[i] = this->ensemble_empl[i];
	}
	for ( int i = this->counter; i < this->capacités; i++) {
		newtable[i] = nullptr;
	}
	delete [] this->ensemble_empl;
	this->ensemble_empl = newtable;
	
}

void Entreprise::calculer_total() 
{
	Employes* emSum=new Employes("nd","n",0,0);
	for (int i = 0; i < this->counter; i++) {
		*emSum += *this->ensemble_empl[i];
		
	}
	this->total = emSum->toString();

}

void Entreprise::details_entreprise() 
{
	for (int i = 0; i < this->counter; i++) {
	 this->ensemble_empl[i]->afficher() ;
	}
	this->calculer_total();
	std::cout << "Le total que l entreprise doit payer:******************" << std::endl;
	std::cout << "salaire:" << this->total <<std::endl;
	
}

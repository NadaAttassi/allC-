#include "Entreprise.h"
#include "Employes.h"
#include <string.h>
Entreprise::Entreprise(std:: string name,int number) :capacitÚs(number), counter(0),total(""),nom(name)
{
	int i;
	this->ensemble_empl = new Employes * [this->capacitÚs];
	for (i = 0; i < this->capacitÚs; i++) {
		ensemble_empl[i] = nullptr;
	}
}

void Entreprise::ajouter(Employes* em)
{
	if (this->capacitÚs==this->counter){
		this->resize();
	}else{
	this->ensemble_empl[this->counter++] = em;
	}
	
}

void Entreprise::resize()
{
	this->capacitÚs *= 2;
	Employes** newtable = new Employes * [this->capacitÚs];

	for (int i = 0; i < this->counter; i++) {
		newtable[i] = this->ensemble_empl[i];
	}
	for ( int i = this->counter; i < this->capacitÚs; i++) {
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

#include "Agent.h"
#include "Employes.h"


Agent::Agent(std::string nm, std::string prenom, float taux, int heure, int total, float com):Employes(nm,prenom,taux,heure),total_ventes(total),comission(com),indemnit�s(0)
{
	
}

void Agent::calculer()
{
	//Employes::calculer();
	this->indemnit�s = this->total_ventes * this->comission;
	this->salaire += this->indemnit�s;
}

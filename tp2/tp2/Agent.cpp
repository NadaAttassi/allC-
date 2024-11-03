#include "Agent.h"



Agent::Agent(int com, int tv, double id,  int th, int nh):commission(com),total_ventes(tv),Employés(id,th,nh),indemnités(0)

{


}

void Agent::calculer_salaire()
{
	this->indemnités = this->commission * total_ventes;
	Employés::calculer_salaire();
	this->salaire += this->indemnités;
}

Agent::~Agent()
{
}




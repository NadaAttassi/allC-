#include "Agent.h"



Agent::Agent(int com, int tv, double id,  int th, int nh):commission(com),total_ventes(tv),Employ�s(id,th,nh),indemnit�s(0)

{


}

void Agent::calculer_salaire()
{
	this->indemnit�s = this->commission * total_ventes;
	Employ�s::calculer_salaire();
	this->salaire += this->indemnit�s;
}

Agent::~Agent()
{
}




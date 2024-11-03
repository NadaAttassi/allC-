#pragma once
#include "Employés.h"
class Agent : public Employés
{
private:
	int indemnités;
	int const commission;
	int total_ventes;
public:
	Agent(int com, int tv,double id,const int th,int nh);
	 void calculer_salaire() override;
	 ~Agent();
};


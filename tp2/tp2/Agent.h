#pragma once
#include "Employ�s.h"
class Agent : public Employ�s
{
private:
	int indemnit�s;
	int const commission;
	int total_ventes;
public:
	Agent(int com, int tv,double id,const int th,int nh);
	 void calculer_salaire() override;
	 ~Agent();
};


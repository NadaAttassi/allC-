#pragma once
class Employés
{
private:
	double identifiant;
	 int tauxH;
	int nombreH;
protected:
	double salaire;
public:
	Employés(double,int,int);
	virtual void calculer_salaire() ;
	void afficher() const; 
	~Employés();
};


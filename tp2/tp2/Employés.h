#pragma once
class Employ�s
{
private:
	double identifiant;
	 int tauxH;
	int nombreH;
protected:
	double salaire;
public:
	Employ�s(double,int,int);
	virtual void calculer_salaire() ;
	void afficher() const; 
	~Employ�s();
};


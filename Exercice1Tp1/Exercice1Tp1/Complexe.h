#pragma once
class Complexe
{
private:
	double Re;
	double img;
public:
	Complexe(double r, double i);
	void afficher();
	double module();
	Complexe* conjugue();
	Complexe* operator + (const Complexe&);
	Complexe* operator + (double a);
	Complexe* operator * (const Complexe&);
	Complexe* operator * (double a);
	Complexe* operator - (const Complexe&);
	Complexe* operator - (double a);
	Complexe* operator / (const Complexe&);
	Complexe* operator / (double a);
	bool operator == (const Complexe&);

};


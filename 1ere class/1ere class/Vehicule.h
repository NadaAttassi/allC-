#pragma once
#include <string>;
using namespace std;

class Vehicule

{
private:
	int id;
	string marque;
	int vitesse;
public:
	Vehicule(const Vehicule& P);
	void afficher();
	void freiner();
   void avancer();
  Vehicule(int id,string mq,int vitesse);
};


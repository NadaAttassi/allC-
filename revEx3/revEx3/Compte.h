#pragma once
#include "Client.h"
#include "Devise.h"

class Compte
{
private:
	static int compteur;
	int id;
	Client* propri�taire;
	Devise* montant;
public:
	Compte(Client* cl,Devise* montant);
	bool depot(Devise* mnt);
	virtual bool transferer(Devise* mnt,Compte& cmpt)=0;
	virtual bool retrait(Devise* mnt)=0;
	void print() const;
	~Compte();

};


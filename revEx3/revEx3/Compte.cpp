#include "Compte.h"
int Compte::compteur = 0;

Compte::Compte(Client* cl, Devise* montant):propri�taire(cl),montant(montant),id(++compteur)
{

}


bool Compte::depot(Devise* mnt)
{
    *this->montant += *mnt;
    return true;
}

bool Compte::transferer(Devise* mnt, Compte& cmpt)
{
    return false;
}

bool Compte::retrait(Devise* mnt)
{
    return false;
}



void Compte::print() const
{
    std::cout << "id: " << this->id << std::endl;
    this->propri�taire->print();
    this->montant->printMontant();
    
}

Compte::~Compte()
{
}

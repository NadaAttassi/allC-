#include "Client.h"
#include <iostream>


Client::Client(std::string nom, std::string prenom):nom(nom),prenom(prenom)

{
}

void Client::print() const
{
	std::cout << "Nom: " << this->nom << " Prenom: " << this->prenom << std::endl;
}

Client::~Client()
{
}

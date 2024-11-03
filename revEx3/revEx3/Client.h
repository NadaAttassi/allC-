#pragma once
#include <iostream>
class Client
{
private:
	std::string nom;
	std::string prenom;
public:
	Client(std::string nom, std::string prenom);
	void print() const;
	~Client();
};


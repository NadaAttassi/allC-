#pragma once
#include <iostream> 
#include <string>
/*
#include <chrono>     // for time handling
#include <iomanip>    // for std::put_time
#include <sstream>*/ 
#include "Devise.h"
class Transaction
{
private:
	std::string type;
	Devise montant;
	std::string dateHeure;
public:
	std::string getCurrentDateTime();
	Transaction(std::string t, double s, std::string u);
	void afficher() const;
};


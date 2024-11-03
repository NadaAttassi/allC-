#include "Transaction.h"
/*
std::string Transaction::getCurrentDateTime()
{
	auto now = std::chrono::system_clock::now(); // Get current time
	std::time_t now_c = std::chrono::system_clock::to_time_t(now); // Convert to time_t

	// Create a formatted string
	std::ostringstream ss;
	ss << std::put_time(std::localtime(&now_c), "%Y-%m-%d %H:%M:%S"); // Format: YYYY-MM-DD HH:MM:SS
	return ss.str();
}*/

Transaction::Transaction(std::string t, double s, std::string u) :type(t), montant(s, u)
{
	//this->dateHeure = getCurrentDateTime();
}

void Transaction::afficher() const
{
	std::cout << "[" << this->dateHeure << "] " << this->type << " de " << this->montant.getSolde() << " " << this->montant.getNom() << " unités." << std::endl;
}



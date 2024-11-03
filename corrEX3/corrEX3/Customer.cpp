#include "Customer.h"
int Customer::count = 0;
Customer::Customer(std::string a, std::string b):First_name(a),Last_name(b),id(++count)
{
}

void Customer::print()
{
	std::cout << "L id:" << this->id << "first name:" << this->First_name << "last name" << this->Last_name << std::endl;
}

Customer::~Customer()
{
}

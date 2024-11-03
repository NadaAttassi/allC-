#pragma once
#include <iostream>

class Forme
{
private:
	std::string nom;
protected :
	float surf;
public :
	Forme(std:: string name);
	virtual void surface() = 0;
	~Forme();

};


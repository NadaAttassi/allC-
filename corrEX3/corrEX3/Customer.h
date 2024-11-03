
#include<iostream>
#pragma once
	class Customer
	{
	private:
		static int count;
		int id;
		std::string First_name;
		std::string Last_name;
	public:
		Customer(std::string, std::string);
		void print();
		~Customer();
	};





#pragma once
#include <iostream>

class Employee {
public:
	void write();
	void read();
private:
	std::string name;
	short age;
	unsigned int zipcode;
	float wage;
	float hoursWorked;

	static const float TAX_RATE;
};
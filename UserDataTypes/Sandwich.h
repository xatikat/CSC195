#pragma once
#include <iostream>

enum Meat
{
	Chicken,
	Prawns,
	Pastrami
};

class Sandwich
{
private:
	float price;

public:
	std::string bread;
	bool isDelicious;
	Meat meat;

	void setPrice(float value);

	void printPrice();
};
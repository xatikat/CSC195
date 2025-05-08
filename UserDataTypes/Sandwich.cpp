#include "Sandwich.h"

void Sandwich::setPrice(float value) 
{
	price = value;
}

void Sandwich::printPrice()
{
	std::cout << "Price: $" << price << std::endl;
}


#include <iostream>
#include "Sandwich.h"

int main()
{
	//typedef float wage; -- traditional c++ way
	using wage = float; // modern c++ way

	wage butcher = 12.5f;
	wage cleaner = 9.5f;
	wage chef = 15.0f;

	Sandwich bbq;

	bbq.bread = "Honey Rye";
	bbq.setPrice(22.50f);
	bbq.isDelicious = true;
	bbq.meat = Meat::Chicken;

	// printPrice(bbq); -- procedural programming: member functions separate from objects

	bbq.printPrice(); // oop = data members + member functions
}
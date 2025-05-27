#pragma once
#include "Food.h"

class Sandwich : public Food
{
public:
	Sandwich() {
		num_of_toppings = 1;
	}

	Sandwich(int calories, int toppings) : Food(calories) {
		num_of_toppings = toppings;
	}

	void Consume() override;
protected:
	int num_of_toppings;
};
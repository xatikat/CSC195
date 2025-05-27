#pragma once
#include "Food.h"


class Fruit : public Food
{
public:
	Fruit() : Food(25) {
		num_of_seeds = 0;
	}
	Fruit(int seeds) : num_of_seeds(seeds) {};

	void Consume() override;
protected:
	int num_of_seeds;
};
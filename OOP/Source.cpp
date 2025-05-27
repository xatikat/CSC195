#include <iostream>
#include "Food.h"
#include "Sandwich.h"
using namespace std;

int main()
{
	/*
	Food food(50);

	food.Consume();

	//food.setCalories(15);
	cout << food.getCalories() << endl;

	Food* pFood = &food;
	//pFood->Consume();
	//(*pFood).Consume();
	*/

	Sandwich ham(100, 2);
	ham.Consume();
}
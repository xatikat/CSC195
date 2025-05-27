#pragma once
#include <iostream>
using namespace std;

class Food
{
public:
	// constructor w/o parameters
	// allocating memory for data members
	// initializing data members w/ a default value
	// if we don't create one manually, one is created for us
	Food() {
		setCalories(0);
		m_p = new int(35);
	}

	// constructor w/ parameters
	Food(int calories) : m_calories(calories) {};

	// destructor
	// deallocates memory
	~Food() { 
		delete m_p; 
	}

	virtual void Consume() = 0;
	int getCalories() { return m_calories; };
	void setCalories(int m_calories) { Food::m_calories = m_calories; };

protected:
	int m_calories = 0;
	int* m_p;
};
#pragma once
#include <vector>
#include "Animal.h"

class Database
{
public:
	~Database() {
		for (Animal* animal : m_animals)
		{
			delete animal;
		}
	};

	void Create(Animal::eType type);
	void DisplayAll();
	void Display(const string& name);
	void Display(Animal::eType type);

private:
	vector<Animal*> m_animals;
};


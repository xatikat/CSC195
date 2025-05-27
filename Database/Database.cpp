#include "Database.h"
#include "Bird.h"

void Database::Create(Animal::eType type)
{
	Animal* animal = nullptr;
	switch (type)
	{
	case Animal::eType::BIRD:
		animal = new Bird;
		break;
	case Animal::eType::REPTILE:
		//animal = new Reptile;
		break;
	default:
		break;
	}

	animal->Read(cout, cin);

	m_animals.push_back(animal);
}

void Database::DisplayAll()
{
	for (Animal* animal : m_animals)
	{
		animal->Write(cout);
	}
}

void Database::Display(Animal::eType type)
{
	for (Animal* animal : m_animals)
	{
		if (animal->getType() == type)
		{
			animal->Write(cout);
		}
	}
}

void Database::Display(const string& name) 
{
	for (Animal* animal : m_animals)
	{
		if (animal->getName() == name)
		{
			animal->Write(cout);
		}
	}
}
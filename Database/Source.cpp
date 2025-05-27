#include "Database.h"
#include "Animal.h"
#include <iostream>
using namespace std;

int main()
{
	Database database;

	database.Create(Animal::eType::BIRD);

	database.DisplayAll();
}
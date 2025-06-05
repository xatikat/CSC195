#include "Database.h"
#define _CRT  DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include "Album.h"

Database* database = new Database;

Release::eType ChooseType()
{
	cout << "Select Release Type\n1 - Album\n2 - Single\n";
	int choice = 2;
	cin >> choice;
	cout << endl;
	return static_cast<Release::eType>(choice);
}

string ChooseFilename()
{
	string filename;
	cout << "Enter filename to save / load: ";
	cin >> filename;
	cout << endl;
	return filename;
}

int main() {
	bool quit = false;
	while (!quit)
	{
		cout << "1 - Add Release\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Load\n6 - Save\n7 - Quit\n";
		int choice;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			database->Add(ChooseType());
			break;
		case 2:
			database->DisplayAll();
			break;
		case 3:
		{
			cout << "Enter Title to Display: ";
			string title;
			cin >> title;
			database->Display(title);
			break;
		}
		case 4:
			database->Display(ChooseType());
			break;
		case 5:
			database->Load(ChooseFilename());
			break;
		case 6:
			database->Save(ChooseFilename());
			break;
		case 7:
			quit = true;
			break;
		}
	}

	delete database;
	_CrtDumpMemoryLeaks();
}



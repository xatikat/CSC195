#include "Database.h"

Database database;

Release::eType ChooseType()
{
	cout << "Select Release Type\n1 - Album\n2 - Single\n";
	int choice = 2;
	cin >> choice;
	cout << endl;
	return static_cast<Release::eType>(choice);
}

int main() {
	bool quit = false;
	while (!quit)
	{
		cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
		int choice;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			database.Create(ChooseType());
			break;
		case 2:
			database.DisplayAll();
			break;
		case 3:
		{
			cout << "Enter Title to Display: ";
			string title;
			cin >> title;
			database.Display(title);
			break;
		}
		case 4:
			database.Display(ChooseType());
			break;
		case 5:
			quit = true;
			break;
		}
	}
}



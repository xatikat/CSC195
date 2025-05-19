#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;

void arrays()
{
	array<string, 7> weekdays = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout << "array size: " << weekdays.size() << endl;

	cout << "all weekdays: ";
	for (string weekday : weekdays)
	{
		cout << weekday << ", ";
	}
	cout << endl;
}

void vectors()
{
	vector<int> points = { 43, 38, 29, 58, 19 };

	points.push_back(49);
	points.push_back(53);
	points.pop_back();

	cout << "all point values: ";
	for (int pointValue : points)
	{
		cout << pointValue << ", ";
	}
	cout << endl;
}

void lists()
{
	list<string> fruits = { "apple", "pear", "burger" };
	fruits.push_front("peach");
	fruits.push_back("orange");
	fruits.remove("burger");

	cout << "all fruits: ";
	for (string fruit : fruits) {
		cout << fruit << ", ";
	}
	cout << endl;
}

void maps()
{
	map<string, int> groceryStock = { {"bananas", 10}, {"apples", 15}, {"ham", 25} };
	groceryStock.insert({ "chicken", 6 });
	groceryStock.insert({ "milk", 23 });
	groceryStock.insert({ "lettuce", 13 });

	groceryStock["lettuce"] = 6;

	cout << endl << "grocery stock: " << endl;
	for (auto item = groceryStock.begin(); item != groceryStock.end(); item++)
	{
		cout << item->first << ": " << item->second << endl;
	}
}

int main()
{
	arrays();
	vectors();
	lists();
	maps();
}
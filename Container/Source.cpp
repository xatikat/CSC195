#include <iostream>
#include <array>
#include <list>
using namespace std;

int main()
{
	//using built-in array
	int numbers[5] = { 1, 2, 3, 4, 5 };

	cout << "Third element: " << numbers[2] << endl;
	// undefined behavior - returns random value within out of bounds address
	cout << "Out of bound element: " << numbers[7] << endl; 

	numbers[1] = 25;
	
	// returns bytes of an object, 20 for this array 
	cout << sizeof(numbers) << endl; // (5 elements * 4 bytes = 20 total bytes)

	// iterating this array
	for (int i = 0; i < size(numbers); i++)
	{
		cout << numbers[i] << ", ";
	}
	cout << endl;

	// fixed length at compile time
	// no built-in methods for common operations
	// fast access to elements, easy to setup

	// ---------

	// stl array
	cout << endl << "STL array: " << endl;
	array<string, 4> stlArray = { "mouse", "tiger", "snake", "penguin" };

	cout << "Third element: " << stlArray[2] << endl;
	//cout << "Out of bound element: " << stlArray[7] << endl; // cannot be done

	cout << "size of array: " << stlArray.size() << endl;

	// iterating thru stl array
	cout << "all elements: ";
	for (string animal : stlArray)
	{
		cout << animal << ", ";
	}
	cout << endl;

	// stl list
	cout << endl << "stl list" << endl;

	list<float> stlList = { 5.6f, 6.3f, 4.2f };
	cout << "size: " << stlList.size() << endl;

	stlList.push_front(2.3f);
	stlList.push_back(7.4f);

	stlList.sort();

	cout << "all elements: ";
	for (float height : stlList)
	{
		cout << height << ", ";
	}
	cout << endl;

	// resizable container
	// helpful for frequent & efficient insertion / deletion
	// higher memory overhead (pointers for each element)
	// works well iterators and other STL compatibilities 
}
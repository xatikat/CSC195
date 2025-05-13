#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void square(int& i)
{
	i = i * i;
}

void Double(int* i)
{
	*i = *i * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	int i1 = 5; // declare an int variable and set the value to some number (less than 10)
	int& ref = i1; // declare a int reference and set it to the int variable above

	cout << "i1: " << i1 << endl; // output the int variable

	ref = 8; // set the int reference to some number
	cout << "i1: " << i1 << endl; // output the int variable
	// what happened to the int variable when the reference was changed? (insert answer)
	// changing the value in the reference variable actually changes the value of the integer it is reference (i1)

	cout << "address i1: " << &i1 << endl; // output the address of the int variable
	cout << "address ref: " << &ref << endl; // output the address of the int reference
	// are the addresses the same or different? (insert answer)
	// they are the exact same addresses, since the reference is just referencing the address of i1

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	square(i1); // call the Square function with the int variable created in the REFERENCE section

	cout << "i1: " << i1 << endl; // output the int variable to the console

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	int* ptr = nullptr; // declare an int pointer, set it to nullptr (it points to nothing)
	ptr = &i1; // set the int pointer to the address of the int variable created in the REFERENCE section

	cout << "ptr: " << ptr << endl;// output the value of the pointer
	// what is this address that the pointer is pointing to? (insert answer)
	// the pointer is pointing to the address of the integer object in memory

	cout << "ptr val: " << *ptr << endl; // output the value of the object the pointer is pointing to (dereference the pointer)

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	Double(ptr); // call the Double function with the pointer created in the POINTER VARIABLE section

	cout << "ptr val: " << *ptr << endl;// output the dereference pointer
	cout << "i1: " << i1 << endl; // output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer?
	// yes, since i was using a pointer parameter for the Double method and altering its value, it changes the value of the original object

}
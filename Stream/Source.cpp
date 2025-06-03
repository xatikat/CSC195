#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Write(string& text, ostream& ostream)
{
	ostream << text;
}

int main()
{
	string text = "Hello world\n";
	//cout << text;

	getline(cin, text);
	//Write(text, cout);
	
	// output to file
	ofstream output("data.txt");
	Write(text, output);
	output.close();

	ifstream input("data.txt");
	string text2;
	getline(input, text2);
	input.close();

	Write(text2, cout);
}
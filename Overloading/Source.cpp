#include <iostream>
#include "Point.h"

using namespace std;

void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

void operator << (ostream& ostream, ost::Point& p)
{
	ostream << p.x << " : " << p.y << endl;
}

int main() {
	print(1);
	print(3.0f);
	print(true);


	ost::Point p1(12.0f, 34.0f);
	ost::Point p2(5.0f, 8.0f);

	//p1.Add(p2);
	ost::Point pSum = p1 + p2;

	//p1.Write();
	cout << p1;
	cout << p2;
	cout << pSum;
}
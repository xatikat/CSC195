#pragma once
#include <iostream>
using namespace std;

namespace ost
{

	class Point
	{
	public:
		float x, y;

	public:
		// Point() { x = 0; y = 0; } // 2-step process
		Point() : x{ 0 }, y{ 0 } {}; // one-step process
		Point(float x, float y) : x{ x }, y{ y } {};

		void Write(ostream& ostream);
		void Add(Point& o);

		Point operator + (ost::Point& o);
	};
}


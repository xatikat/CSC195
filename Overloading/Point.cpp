#include "Point.h"

void ost::Point::Write(ostream& ostream)
{
	ostream << x << " : " << y << endl;
}

void ost::Point::Add(Point& o)
{
	x += o.x;
	y += o.y;
}

ost::Point ost::Point::operator+(ost::Point& o)
{
	Point sumPoint;
	sumPoint.x = x + o.x;
	sumPoint.y = y + o.y;
	return sumPoint;
}

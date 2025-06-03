#include "Fraction.h"
using namespace mathlib;

void mathlib::operator<<(ostream& ostream, const Fraction& frac)
{
	ostream << frac.numerator << " / " << frac.denominator;
}

void mathlib::operator>>(istream& istream, Fraction& frac)
{
	cout << "Enter numerator: ";
	istream >> frac.numerator;

	cout << "Enter denominator: ";
	istream >> frac.denominator;
}

Fraction Fraction::operator+(const Fraction& o)
{
	Fraction fracSum{ 0,0 };
	fracSum.denominator = denominator * o.denominator;
	fracSum.numerator = (numerator * o.denominator) + (o.numerator * denominator);
	return fracSum;
}

Fraction Fraction::operator-(const Fraction& o)
{
	Fraction fracDiff{ 0,0 };
	fracDiff.denominator = denominator * o.denominator;
	fracDiff.numerator = (numerator * o.denominator) - (o.numerator * denominator);
	return fracDiff;
}

Fraction mathlib::Fraction::operator*(const Fraction& o)
{
	Fraction fracProduct{ 0,0 };
	fracProduct.denominator = denominator * o.denominator;
	fracProduct.numerator = numerator * o.numerator;
	return fracProduct;
}

Fraction mathlib::Fraction::operator/(const Fraction& o)
{
	Fraction fracDividend{ 0,0 };
	fracDividend.denominator = denominator * o.numerator;
	fracDividend.numerator = numerator * o.denominator;
	return fracDividend;
}

bool mathlib::Fraction::operator==(Fraction& o)
{
	return (this->toDouble() == o.toDouble());
}

bool mathlib::Fraction::operator!=(Fraction& o)
{
	return !(this->toDouble() == o.toDouble());
}

bool mathlib::Fraction::operator<(Fraction& o)
{
	return (this->toDouble() < o.toDouble());
}

bool mathlib::Fraction::operator>(Fraction& o)
{
	return (this->toDouble() > o.toDouble());
}

bool mathlib::Fraction::operator<=(Fraction& o)
{
	return (this->toDouble() <= o.toDouble());
}

bool mathlib::Fraction::operator>=(Fraction& o)
{
	return (this->toDouble() >= o.toDouble());
}

void Fraction::simplify() 
{
	int gcd = numerator;
	int remainder = denominator;
	int temp;
	// *BORROWING THE EUCLIDEAN ALGORITHM*
	// keeps finding remainder of larger number divded by smaller number
	// once remainder reaches 0, it uses the previous remainder found 
	// (which is the greatest common divisor)
	// 
	// FOR EXAMPLE: beginning with numerator = 30, denominator = 35
	// after first pass -> remainder = 30 (= 30 % 35), gcd = 35
	// after second pass -> remainder = 5 (= 35 % 30), gcd = 30
	// after third pass -> remainder = 0 (30 % 5), gcd = 5
	// gcd ends up being 5
	// numerator = 6 (30 / 5), denominator = 7 (35 / 5)
	while (remainder != 0)
	{
		temp = remainder;
		remainder = gcd % remainder;
		gcd = temp;
	}
	numerator /= gcd;
	denominator /= gcd;
}

double Fraction::toDouble()
{
	return double(numerator) / double(denominator);
}
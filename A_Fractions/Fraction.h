#pragma once
#include <iostream>
using namespace std;

namespace mathlib {
	class Fraction
	{
	public:	
		Fraction(int numer, int denom)
		{
			numerator = numer;
			if (denom != 0) { denominator = denom; }
			else { denominator = 1; }
		}
		
		// arithmetic operators
		Fraction operator + (const Fraction& o);
		Fraction operator - (const Fraction& o);
		Fraction operator * (const Fraction& o);
		Fraction operator / (const Fraction& o);

		// comparison operators
		bool operator == (Fraction& o);
		bool operator != (Fraction& o);
		bool operator < (Fraction& o);
		bool operator > (Fraction& o);
		bool operator <= (Fraction& o);
		bool operator >= (Fraction& o);

		// input / output operators
		// allow access to private variables
		friend void operator << (ostream& ostream, const Fraction& frac);
		friend void operator >> (istream& istream, Fraction& frac);

		// utility methods
		void simplify();
		double toDouble();

	private:
		int numerator;
		int denominator;
	};
}




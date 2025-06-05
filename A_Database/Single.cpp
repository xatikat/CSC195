#include "Single.h"

int Single::GetRuntime()
{
	return runtime;
}

void Single::Read(ostream& ostream, istream& istream)
{
	Release::Read(ostream, istream);
	ostream << "Enter Runtime: ";
	istream >> runtime;
	ostream << endl;
}

void Single::Write(ostream& ostream)
{
	Release::Write(ostream);
	ostream << "Runtime: " << runtime << endl;
}

istream& operator>>(istream& istream, Single& single)
{
	single.Read(cout, istream);
	return istream;
}

ostream& operator<<(ostream& ostream, Single& single)
{
	single.Write(ostream);
	return ostream;
}

void Single::Read(ifstream& istream)
{
	Release::Read(istream);
	istream >> runtime;
}

void Single::Write(ofstream& ostream)
{
	Release::Write(ostream);
	ostream << runtime;
}

ifstream& operator>>(ifstream& istream, Single& single)
{
	single.Read(istream);
	return istream;
}

ofstream& operator<<(ofstream& ostream, Single& single)
{
	single.Write(ostream);
	return ostream;
}

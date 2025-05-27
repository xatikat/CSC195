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
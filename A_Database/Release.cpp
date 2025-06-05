#include "Release.h"

string Release::GetTitle()
{
	return title;
}

string Release::GetArtist() 
{
	return artist;
}

// REGULAR I/O

void Release::Read(ostream& ostream, istream& istream)
{
	ostream << "Enter Title: ";
	istream >> title;

	ostream << "Enter Artist: ";
	istream >> artist;
}

void Release::Write(ostream& ostream)
{
	ostream << "Title: " << title << endl;
	ostream << "Artist: " << artist << endl;
}

istream& operator>>(istream& istream, Release& release)
{
	release.Read(cout, istream);
	return istream;
}

ostream& operator<<(ostream& ostream, Release& release)
{
	release.Write(ostream);
	return ostream;
}

// FILE I/O

void Release::Read(ifstream& istream)
{
	istream >> title;
	istream >> artist;
}

void Release::Write(ofstream& ostream)
{
	ostream << title << endl;
	ostream << artist << endl;
}

ifstream& operator>>(ifstream& istream, Release& release)
{
	release.Read(istream);
	return istream;
}

ofstream& operator<<(ofstream& ostream, Release& release)
{
	release.Write(ostream);
	return ostream;
}



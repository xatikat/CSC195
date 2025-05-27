#include "Release.h"

string Release::GetTitle()
{
	return title;
}

string Release::GetArtist() 
{
	return artist;
}

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
#include "Album.h"

int Album::GetNumOfTracks() 
{
	return numOfTracks;
}

void Album::Read(ostream& ostream, istream& istream)
{
	Release::Read(ostream, istream);

	ostream << "Enter Number of Tracks: ";
	istream >> numOfTracks;
	ostream << endl;
}

void Album::Write(ostream& ostream)
{
	Release::Write(ostream);

	ostream << "Number of Tracks: " << numOfTracks << endl;
}

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

istream& operator>>(istream& istream, Album& album)
{
	album.Read(cout, istream);
	return istream;
}

ostream& operator<<(ostream& ostream, Album& album)
{
	album.Write(ostream);
	return ostream;
}

void Album::Read(ifstream& istream)
{
	Release::Read(istream);
	istream >> numOfTracks;
}

void Album::Write(ofstream& ostream)
{
	Release::Write(ostream);
	ostream << numOfTracks;
}

ifstream& operator>>(ifstream& istream, Album& album)
{
	album.Read(istream);
	return istream;
}

ofstream& operator<<(ofstream& ostream, Album& album)
{
	album.Write(ostream);
	return ostream;
}



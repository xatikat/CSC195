#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Release
{
public:
	enum class eType {
		ALBUM = 1,
		SINGLE = 2
	};
	string GetTitle();
	string GetArtist();

	virtual eType GetType() = 0;

	// regular i/o
	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);

	friend istream& operator >> (istream& istream, Release& release);
	friend ostream& operator << (ostream& ostream, Release& release);

	// file i/o
	virtual void Read(ifstream& istream);
	virtual void Write(ofstream& ostream);

	friend ifstream& operator >> (ifstream& istream, Release& release);
	friend ofstream& operator << (ofstream& ostream, Release& release);

private:
	string title;
	string artist;
};


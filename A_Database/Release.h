#pragma once
#include <iostream>
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

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);
	
private:
	string title;
	string artist;
};


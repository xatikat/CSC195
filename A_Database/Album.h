#pragma once
#include "Release.h"
class Album :
    public Release
{
public:
    int GetNumOfTracks();

    eType GetType() override { return eType::ALBUM; };

	// regular i/o
	virtual void Read(ostream& ostream, istream& istream) override;
	virtual void Write(ostream& ostream) override;

	friend istream& operator >> (istream& istream, Album& album);
	friend ostream& operator << (ostream& ostream, Album& album);

	// file i/o
	virtual void Read(ifstream& istream) override;
	virtual void Write(ofstream& ostream) override;

	friend ifstream& operator >> (ifstream& istream, Album& album);
	friend ofstream& operator << (ofstream& ostream, Album& album);

private:
    int numOfTracks;
};


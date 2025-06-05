#pragma once
#include "Release.h"
class Single :
    public Release
{
public:
    int GetRuntime();

    eType GetType() override { return eType::SINGLE; };

	// regular i/o
	virtual void Read(ostream& ostream, istream& istream) override;
	virtual void Write(ostream& ostream) override;

	friend istream& operator >> (istream& istream, Single& single);
	friend ostream& operator << (ostream& ostream, Single& single);

	// file i/o
	virtual void Read(ifstream& istream) override;
	virtual void Write(ofstream& ostream) override;

	friend ifstream& operator >> (ifstream& istream, Single& single);
	friend ofstream& operator << (ofstream& ostream, Single& single);

private:
    int runtime;
};


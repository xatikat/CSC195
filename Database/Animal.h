#pragma once
#include <iostream>
using namespace std;

class Animal
{
public:
	enum class eType {
		BIRD = 1,
		REPTILE
	};

	string getName() { return m_name; };
	virtual eType getType() = 0;

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);

protected:
	string m_name;
	int m_lifespan = 0;
};


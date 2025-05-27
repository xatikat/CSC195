#pragma once
#include "Release.h"
#include <vector>
class Database
{
public:
	~Database() {
		for (Release* release : releases)
		{
			delete release;
		}
	};

	void Create(Release::eType type);
	void DisplayAll();
	void Display(const string title);
	void Display(Release::eType type);

protected:
	vector<Release*> releases;
};


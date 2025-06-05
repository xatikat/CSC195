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

	void Add(Release::eType type);
	void DisplayAll();
	void Display(const string title);
	void Display(Release::eType type);
	
	void Load(const string& filename);
	void Save(const string& filename);

private:
	Release* Create(Release::eType type);

protected:
	vector<Release*> releases;
};


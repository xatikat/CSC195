#include "Database.h"
#include "Album.h"
#include "Single.h"

void Database::Create(Release::eType type) {
	Release* release = nullptr;
	switch (type) {
	case Release::eType::ALBUM:
		release = new Album;
		break;
	case Release::eType::SINGLE:
		release = new Single;
		break;
	}
	release->Read(cout, cin);
	releases.push_back(release);
}

void Database::DisplayAll()
{
	for (Release* release : releases)
	{
		release->Write(cout);
		cout << endl;
	}
}

void Database::Display(string title)
{
	for (Release* release : releases)
	{
		if (release->GetTitle() == title)
		{
			release->Write(cout);
			cout << endl;
		}
	}
}

void Database::Display(Release::eType type)
{
	for (Release* release : releases)
	{
		if (release->GetType() == type)
		{
			release->Write(cout);
			cout << endl;
		}
	}
}
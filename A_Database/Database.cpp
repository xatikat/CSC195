#include "Database.h"
#include "Album.h"
#include "Single.h"

void Database::Add(Release::eType type) 
{
	Release* release = Create(type);

	release->Read(cout, cin);
	releases.push_back(release);
}

Release* Database::Create(Release::eType type)
{
	Release* release = nullptr;
	switch (type)
	{
	case Release::eType::ALBUM:
		release = new Album;
		break;
	case Release::eType::SINGLE:
		release = new Single;
		break;
	default:
		break;
	}
	return release;
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

void Database::Load(const string& filename)
{
	ifstream input(filename);
	if (input.is_open())
	{
		releases.clear();
		while (!input.eof())
		{
			int type;
			input >> type;
			Release* release = Create(static_cast<Release::eType>(type));

			release->Read(input);

			releases.push_back(release);
		}
	}
}

void Database::Save(const string& filename)
{
	ofstream output(filename);
	if (output.is_open())
	{
		for (Release* release : releases) 
		{
			output << endl;
			output << static_cast<int>(release->GetType()) << endl;
			release->Write(output);
		}
	}
}

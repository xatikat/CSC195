#pragma once
#include "Release.h"
class Album :
    public Release
{
public:
    int GetNumOfTracks();

    eType GetType() override { return eType::ALBUM; };

    virtual void Read(ostream& ostream, istream& istream) override;
    virtual void Write(ostream& ostream) override;

private:
    int numOfTracks;
};


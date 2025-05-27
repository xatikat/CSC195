#pragma once
#include "Release.h"
class Single :
    public Release
{
public:
    int GetRuntime();

    eType GetType() override { return eType::SINGLE; };

    virtual void Read(ostream& ostream, istream& istream) override;
    virtual void Write(ostream& ostream) override;

private:
    int runtime;
};


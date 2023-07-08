#pragma once

#include "Employer.h"

class Manager : public IEmployer
{
private:
    string name;
public:
    Manager(const string name);
    void print() const;
};
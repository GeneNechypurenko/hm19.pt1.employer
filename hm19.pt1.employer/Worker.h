#pragma once

#include "Employer.h"

class Worker : public IEmployer
{
private:
    string name;
public:
    Worker(const string name);
    void print() const;
};
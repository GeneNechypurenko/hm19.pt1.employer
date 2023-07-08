#pragma once

#include "Employer.h"

class President : public IEmployer
{
private:
    string name;

public:
    President(const string name);
    void print() const;
};
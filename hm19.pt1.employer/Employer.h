#pragma once
#include <iostream>
#include <string>

using namespace std;

class IEmployer
{
public:
    virtual ~IEmployer() {}
    virtual void print() const = 0;
};
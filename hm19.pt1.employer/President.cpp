#include "President.h"

President::President(const string name)
	:
	name(name)
{}

void President::print() const
{
	cout << name << " President" << endl;
}

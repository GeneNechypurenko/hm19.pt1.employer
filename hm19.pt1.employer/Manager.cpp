#include "Manager.h"

Manager::Manager(const string name)
	:
	name(name)
{}

void Manager::print() const
{
	cout << name << " Manager" << endl;
}

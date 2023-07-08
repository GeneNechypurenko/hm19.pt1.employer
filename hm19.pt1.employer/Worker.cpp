#include "Worker.h"

Worker::Worker(const string name)
	:
	name(name)
{}

void Worker::print() const
{
	cout << name << " Worker" << endl;
}

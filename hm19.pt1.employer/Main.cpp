#include <iostream>
#include <string>

#include "Employer.h"
#include "Manager.h"
#include "President.h"
#include "Worker.h"

#define SIZE 3

using namespace std;

int main()
{
	IEmployer* emp[SIZE];
	emp[0] = new Worker ("Chuck Norris");
	emp[1] = new Manager ("Tom Cruise");
	emp[2] = new President ("Kevin Costner");

	for (int i = 0; i < SIZE; i++)
		emp[i]->print();

	for (int i = 0; i < SIZE; i++)
		delete emp[i];

	return 0;
}


#include "student.h"
#include "grad.h"

#include <iostream>

void Grad::displayInfo()
{
	cout << endl << "Grad student: " << getName() << endl;
	cout << "Roll number: " << getRollNo() << endl;
	cout << "Credits: " << getCredits() << endl << endl;
}
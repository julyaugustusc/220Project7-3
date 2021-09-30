#include "student.h"

Student::Student(string studentName, int studentRollNo, studentType type, int studentCredits)
{
	name = studentName;
	rollNo = studentRollNo;
	level = type;
	credits = studentCredits;
}

string Student::getName()
{
	return name;
}

int Student::getRollNo()
{
	return rollNo;
}

studentType Student::getstudentType()
{
	return level;
}

int Student::getCredits()
{
	return credits;
}



// project7
// Q2.1 define two operator+ overloaded functions here [5]
/*Student Student::operator+(Student &student) {
	Student s(*this);
	s.credits = this->credits + student.credits;
	return s;
}*/
int Student::operator+(Student &student) {
	return this->credits + student.credits; //int because it returns credits
}



/*Student Student::operator+(int inputCredits) {
	Student s(*this);
	s.credits = this->credits + inputCredits;
	return s;
}*/
int Student::operator+(int inputCredits){ //int because it returns credits
	return this->credits + inputCredits;
}

// project7
// Q3.1 define  operator= overloaded function here [10]
Student Student::operator=(Student &student) {  //this->members = student.members for all
	this->name = student.name;
	this->rollNo = student.rollNo;
	this->level = student.level;
	this->credits = student.credits;

	return *this;		//pointer to student
}

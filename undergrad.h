#ifndef _UNDERGRAD_H
#define _UNDERGRAD_H

class Undergrad : public Student
{

public:
	Undergrad(string studentName, int studentRollNo, studentType studentLevel, int studentCredits) : Student( studentName,  studentRollNo,  studentLevel, studentCredits) 
	{}

	void displayInfo();
};
#endif // _UNDERGRAD_H
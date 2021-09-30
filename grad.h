#ifndef _GRAD_H_
#define _GRAD_H_

class Grad : public Student
{
public:
	Grad(string studentName, int studentRollNo, studentType studentLevel, int studentCredits) : Student(studentName, studentRollNo, studentLevel, studentCredits)
	{}
	void displayInfo();
};
#endif // _GRAD_H_
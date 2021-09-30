#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>
using namespace std;

enum studentType { undergrad = 0, grad };	// definition of studentType

// project7 Q1.1		Add int member 'credits' and in Student class.
//						Add member function getCredits() that returns credits.
class Student {
private:
	string name; // private local variables
	int rollNo;
	studentType level;
	int credits;

public:
	Student(string studentName, int studentRollNo, studentType studentLevel, int studentCredits); // constructor

	// accessor methods
	string getName();
	int getRollNo();
	studentType getstudentType(); 
	int getCredits();



	virtual void displayInfo()
	{}
	friend void changeRollNo(Student *student, int rollNo_input);

//	project7	Q2.1	Add declaration of operator+ overloaded functions in Student class.
	int operator+ (Student &student);
	
	int operator+ (int inputCredits);

//	project7	Q3.1 Add declaration of operator= overloaded function
	Student operator= (Student &student);
};

#endif // _STUDENT_H_
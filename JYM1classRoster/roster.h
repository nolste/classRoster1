#pragma once
#include <string>
#include "degree.h"
#include "student.h"

using std::string;

class Roster
{
private:
	//static int numStudents;
	
	

public:
	//const static int numStudents = 5;
	//methods
	//int getNumStudents();
	static Student* parse(string);
	static Student* add(string studentID, string firstName, string lastName, string emailAddress,
		int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	//void add();
	//void remove(string studentID);
	//void printAll();
	//void printAverageDaysInCourse(string studentID);
	//void printInvalidEmails();



};


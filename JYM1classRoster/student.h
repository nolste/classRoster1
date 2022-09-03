#pragma once
#include <iostream>
#include <string>
#include "degree.h"

using std::string;

class Student
{
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numberOfdays [3];
	DegreeProgram degreeProgram;

	

public:
	//setters
	void setStudentID(string studentIDVal);
	void setFirstName(string firstNameVal);
	void setLastName(string lastNameVal);
	void setEmailAddress(string emailAddressVal);
	void setAge(int ageVal);
	void setNumberOfDays(int day1, int day2, int day3);
	void setDegreeProgram(DegreeProgram degreeProgramVal);
	//getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	const int* getNumberofDays()const;
	string getDegreeProgram();
	//constructor
	Student(string studentIDInput, string firstNameInput,
		string lastNameInput, string emailAddressInput, int ageInput,
		int numofdays1, int numofdays2, int numofdays3,
		DegreeProgram degreeProgramInput);
	//print method
	void print();





	
};

#include "roster.h"
#include "student.h"



void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age,
	int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

	classRosterArray[++arrayIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
}


void Roster::parse(string data) {
	size_t rhs = data.find(",");
	string studentID = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string firstName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string lastName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string email = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int age = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int numofdays1 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int numofdays2 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int numofdays3 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string degreeProgram = data.substr(lhs, rhs - lhs);


	
	DegreeProgram degree = DegreeProgram::NETWORK;

	if (degreeProgram == "NETWORK") {
		degree = DegreeProgram::NETWORK;
	}
	else if (degreeProgram == "SECURITY") {
		degree = DegreeProgram::SECURITY;
	}
	else if (degreeProgram == "SOFTWARE") {
		degree = DegreeProgram::SOFTWARE;
	}
	Roster::add(studentID, firstName, lastName, email, age, numofdays1, numofdays2, numofdays3, degree);

	



}

void Roster::printAll() {
	for (int i = 0; i <= arrayIndex; i++) {
		std::cout << classRosterArray[i]->getStudentID() << '\t';
		std::cout << classRosterArray[i]->getFirstName() << '\t';
		std::cout << classRosterArray[i]->getLastName() << '\t';
		std::cout << classRosterArray[i]->getEmailAddress() << '\t';
		std::cout << classRosterArray[i]->getAge() << '\t';
		std::cout << classRosterArray[i]->getNumberofDays() << '\t';
		std::cout << classRosterArray[i]->getDegreeProgram() << '\t' << std::endl;



	}
}





#include "student.h"

//setters
void Student::setStudentID(string studentIDVal) {
	studentID = studentIDVal;
}
void Student::setFirstName(string firstNameVal) {
	firstName = firstNameVal;
};
void Student::setLastName(string lastNameVal) {
	lastName = lastNameVal;
};
void Student::setEmailAddress(string emailAddressVal) {
	emailAddress = emailAddressVal;
};
void Student::setAge(int ageVal) {
	age = ageVal;
};
void Student::setNumberOfDays(int day1, int day2, int day3) {
	numberOfdays[0] = day1;
	numberOfdays[1] = day2;
	numberOfdays[2] = day3;
};
void Student::setDegreeProgram(DegreeProgram degreeProgramVal) {
	degreeProgram = { degreeProgramVal };
};
//getters
string Student::getStudentID() {
	return studentID;
};
string Student::getFirstName(){
	return firstName;
};
string Student::getLastName() {
	return lastName;
};
string Student::getEmailAddress() {
	return emailAddress;
};
int Student::getAge() {
	return age;
};

const int* Student::getNumberofDays() const {
	return numberOfdays;

};
string Student::getDegreeProgram() {
	if (degreeProgram == DegreeProgram::SECURITY) {
		return DegreeProgramStrings[0];
	}
	else if (degreeProgram == DegreeProgram::NETWORK) {
		return DegreeProgramStrings[1];
	}
	else return DegreeProgramStrings[2];
	
};
//constructor
Student::Student(string studentIDInput, string firstNameInput,
	string lastNameInput, string emailAddressInput, int ageInput,
	int numofdays1, int numofdays2, int numofdays3,
	DegreeProgram degreeProgramInput)
	:studentID{ studentIDInput }, firstName{ firstNameInput }, lastName{ lastNameInput },
	emailAddress{ emailAddressInput }, age{ ageInput }, numberOfdays{ numofdays1,numofdays2,numofdays3 },
	degreeProgram{ degreeProgramInput } {

}

//print method... add commas after each element?
void Student::print() {
	std::cout << getStudentID() << ", ";
	std::cout << getFirstName() << ", ";
	std::cout << getLastName() << ", ";
	std::cout << getEmailAddress() << ", ";
	std::cout << getAge() << ", ";
	//add .sizeoperator or some other size detecting option
	for (int i=0; i < 3; ++i) {
		std::cout << " " << getNumberofDays()[i] << ", ";
	};
	std::cout << getDegreeProgram() << " ";
	
};
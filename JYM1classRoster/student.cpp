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
void Student::setDegreeProgram(string degreeProgramVal) {
	degreeProgram = degreeProgramVal;
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
//////////////////////test this method below////////////////////
const int* Student::getNumberofDays() const {
	return numberOfdays;

};
string Student::getDegreeProgram() {
	return degreeProgram;
};
//constructor
Student::Student(string studentIDInput, string firstNameInput,
	string lastNameInput, string emailAddressInput, int ageInput,
	int numofdays1, int numofdays2, int numofdays3,
	string degreeProgramInput)
	:studentID{ studentIDInput }, firstName{ firstName }, lastName{ lastNameInput },
	emailAddress{ emailAddressInput }, age{ ageInput }, numberOfdays{ numofdays1,numofdays2,numofdays3 },
	degreeProgram{ degreeProgramInput } {

}

//print method
void Student::print() {
	std::cout << this->studentID<<" ";
	std::cout << this->firstName<<" ";
	std::cout << this->lastName<<" ";
	std::cout << this->emailAddress<<" ";
	std::cout << this->age<<" ";
	for (auto num : numberOfdays) {
		std::cout <<" "<< num << ", ";
	}
	std::cout << this->degreeProgram;


};
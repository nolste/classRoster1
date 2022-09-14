#include <iostream>
#include <string>
#include "degree.h"
#include "roster.h"
#include "student.h"


int main()
{
    std::cout << "C867 JYM1 TASK 1: CLASS ROSTER \nProgramming language used: C++ \nJ. Nolan Steiner, student ID:010098853" << "\n\n";

    const std::string studentData[] =

    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Nolan,Steiner,jsteiner@wgu.edu,30, 3,2,1,SOFTWARE"
    };
    //create roster object
    Roster roster;

    //parse student data into roster
    for (int i = 0; i < Roster::numStudents; i++) {
		roster.parse(studentData[i]);		
	}

    roster.printAll();
    roster.printInvalidEmails();
    roster.printAverageDaysInCourse("A1");
    roster.printByDegreeProgram("SOFTWARE");
    roster.remove("A3");
    roster.printAll();
    roster.remove("A3");  

}







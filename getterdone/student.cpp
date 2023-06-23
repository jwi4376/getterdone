#include <iostream>

#include <string>

#include"student.h"

using namespace std;

void student::setID (string StudentID){StudentID = ID;}
void student::setName (string FirstName) { FirstName  = Name;}
void student::setLast (string LastName) { LastName =Last;}
void student::setEmail (string EmailAddress) { EmailAddress =Email;}
void student::setAge (int AgeInYears ) { AgeInYears = Age;}
void student::setDays1 (int DaysInCourse1) {DaysInCourse1= Days1;}
void student::setDays2 (int DaysInCourse2) {DaysInCourse2= Days2;}
void student::setDays3 (int DaysInCourse3) {DaysInCourse3= Days3;}
void student::setDegreeProgram (enum DegreeProgram  ) {degreeProgram=DegreeProgram();}
void student::print() const {cout << ID <<""<<  Name <<""<<  Last  <<""<< Email <<""<<   Age  <<""<< Days1,Days2,Days3 <<""<<  degreeProgram <<endl;}

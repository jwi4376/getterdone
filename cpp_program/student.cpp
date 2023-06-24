#include <iostream>
#include "student.h"



using namespace std;

Student::Student(){
        studentID = "000";
        firstName = "john";
        lastName = "Doe";
        emailAddress = "JohnDoe@gmail.com";
        age = 1;
        daysToComplete1 = 01,
        daysToComplete2 = 02,
        daysToComplete3 = 03,
        degreeProgram = DP_Software;
    }
Student::Student(
    string studentID, 
    string firstName, 
    string lastName, 
    string emailAddress, 
    int age, 
    int daysToComplete1,
    int daysToComplete2,
    int daysToComplete3,
    DegreeProgram degreeProgram ){
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->age = age;
        this->daysToComplete1 = daysToComplete1,
        this->daysToComplete2 = daysToComplete2,
        this->daysToComplete3 = daysToComplete3,
        this->degreeProgram = degreeProgram;
    }

string Student::getStudentID(){return studentID;}
string Student::getFirstName(){return firstName;}
string Student::getLastName(){return lastName;}
string Student::getEmailAdress(){return emailAddress;}
int Student::getAge(){return age;}
int Student::getDaysToComplete(){return daysToComplete1, daysToComplete2, daysToComplete3;}
DegreeProgram Student::getDegreeProgram(){return degreeProgram;}


void Student::setStudentID(string ID){studentID = ID;}

void Student::print() const { 
    std::cout << " Student ID: " << studentID << " Student Name: " 
    << firstName << " " << lastName << " Student Email: " 
    << emailAddress << " Student Age: " << age << " Student days to complete: " 
    << daysToComplete1 << daysToComplete2 << daysToComplete3 << " Student degree: " << degreeProgram << endl;
}
#include <iostream>
#include <string>

#include "roster.h"

using namespace std;


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram){

    Student newStudent = Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);

    newStudent.print();

}
void Roster::remove(string studentID){}
void Roster::printAll(){
    std::cout << ptrClassRosterArray;
    // for(int i = 0; i < sizeof(ptrClassRosterArray); i++){
    //     std::cout << ptrClassRosterArray[i];
    // }
}
void Roster::printAverageDaysInCourse(string studentID){}
void Roster::printInvalidEmails(){}
void Roster::parse(string data){
    
    size_t rhs = data.find (",");
    string ID = data.substr(0,rhs);

    size_t lhs = rhs + 1;
    rhs = data.find (",",lhs);
    string first = data.substr(lhs,rhs-lhs);

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    string last = data.substr(lhs,rhs-lhs);

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    string email = data.substr(lhs,rhs-lhs);

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    int age = stoi(data.substr(lhs,rhs-lhs));

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    int days1 = stoi(data.substr(lhs,rhs-lhs));

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    int days2 = stoi(data.substr(lhs,rhs-lhs));

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    int days3 = stoi(data.substr(lhs,rhs-lhs));

    lhs = rhs + 1;
    rhs = data.find (",",lhs);
    string strDegreeProgram =data.substr(lhs,rhs-lhs);

    DegreeProgram degreeProgram = DegreeProgram::DP_Done; 

    if (strDegreeProgram == "Security") {
         degreeProgram = DegreeProgram:: DP_Security;
        
       }
      
      else if (strDegreeProgram == "Network") {
         degreeProgram= DegreeProgram::DP_Network;
        }
      
      else if (strDegreeProgram == "Software") {
         degreeProgram = DegreeProgram:: DP_Software;
      }


    std::cout << " Student ID: " << ID << " Student Name: " 
    << first << " " << last << " Student Email: " 
    << email << " Student Age: " << age << " Student days to complete: " 
    << days1 << " "<< days2 << " " << days3 << " "<< " Student degree: " << degreeProgram << endl;

    add(ID, first, last, email, age, days1, days2, days3, degreeProgram); 
    
};


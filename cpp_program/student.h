#include <string>

#include "degree.h"

using namespace std;

class Student {
    private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete1;
    int daysToComplete2;
    int daysToComplete3;
    DegreeProgram degreeProgram;


    public:
    Student();
    Student(
        string studentID, 
        string firstName, 
        string lastName, 
        string emailAddress, 
        int age, 
        int daysToComplete1,
        int daysToComplete2,
        int daysToComplete3,
        DegreeProgram degreeProgram 
        );

    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAdress();
    int getAge();
    int getDaysToComplete();
    DegreeProgram getDegreeProgram();

    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAdress(string emailAddress);
    void setAge(int age);
    void setDaysToComplete(int day1, int day2, int day3);
    void setDegreeProgram();

    void print() const;
};
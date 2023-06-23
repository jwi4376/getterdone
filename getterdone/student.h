 #include<iostream>

 #include <string>

 #include "degree.h"

 using namespace std;
 
 class student{
    public:
    student();
    student(string ID, string Name, string Last,string Email,int Age,int Days1,int Days2,int Days3,DegreeProgram degreeProgram);
    void setID(string StudentID);
    void setName(string FirstName);
    void setLast(string LastName);
    void setEmail(string EmailAddress);
    void setAge(int AgeInYears);
    void setDays1(int DaysInCourse1);
    void setDays2(int DaysInCourse2);
    void setDays3(int DaysInCourse3);
    void setDegreeProgram( DegreeProgram degreeProgram);

    string getId();
    string getName();
    string getLast();
    string getEmail();
    int getAge();
    int getDays1();
    int getDays2();
    int getDays3();
    DegreeProgram getDegree();
    
    void print() const;

    private:
    string ID="ID";
    string Name="first";
   string Last="last";
   string Email="default@wgu.edu";
   int Age='0';
   int Days1='012345678';
   int Days2='0';
  int  Days3='1';
    DegreeProgram degreeProgram;

       };
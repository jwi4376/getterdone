#include <iostream>

#include <string>

#include "roster.h"

student* parse(string data);

using namespace std;

int main()
{
    const string studentData[5] = 

{"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
"A5,Joseph,Wilson,jwi4376@wgu.edu,24, 30,35,26,SOFTWARE"};

student* studentList;


for (int i = 0; i < 5; i++)
{
   studentList[i] = *parse(studentData[i]);
   studentList[i] = print();
}

for (int i = 0; i < 5; i++)
{
    delete *student[i];
}
}
student *parse(string data){
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

         return 0;
};

class greeting{
    public:
    void print();
};
void greeting::print()
{
cout <<"C867-Scripting and Programming: Applications"<<endl<<
"Language: C++"<<endl<<
"Student ID:010283015"<<endl<<
"Joseph B Wilson"<<endl;}

    



#include <iostream>
#include <string>
#include "roster.h"


using namespace std;

int main(){

    Roster classRoster;

    const string studentData[1] = {"A1, Joihn, Smith, John1989@gm ail.com,20, 30,35,40,SECURITY"};

    for (int i = 0; i < 1; i++){
        
        classRoster.parse(studentData[i]);
    }

    classRoster.printAll();




    std::cout <<"C867-Scripting and Programming: Applications"<< endl << "Language: C++" << endl << "Student ID:010283015" << endl << "Joseph B Wilson" << endl;
 
}
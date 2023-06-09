#include <string>

#include "student.h"

using namespace std;

class Roster {
    private:
    Student *ptrClassRosterArray[5];
    // Student classRosterArray[5];

    public:
    void parse(string);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID) ; 
    void printInvalidEmails();

};
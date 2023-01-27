#include "student.h"
#include "studentDatabase.h"
#include <iostream>
using namespace std;


int main ()
{
    StudentDatabase studentDB;

    Student s1("John", 20, "Computer Science");
    Student s2("Mary", 22, "Physics");
    Student s3("Bob", 21, "Mathematics");

    cout << "Number of students in the database: " << studentDB.getNumberOfStudents() << endl;

    studentDB.addStudent(s1);
    studentDB.addStudent(s2);
    studentDB.addStudent(s3);

    cout << "Number of students in the database: " << studentDB.getNumberOfStudents() << endl;

    studentDB.printAllStudents();

    studentDB.removeStudent(20);
    cout << "\n-------------\n";
    studentDB.printAllStudents();
    cout << "Number of students in the database: " << studentDB.getNumberOfStudents() << endl;


    return 0;
}

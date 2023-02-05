//
// Created by Zaedul Islam on 2023-01-22.
//
#include "studentDatabase.h"
#include "student.h"


StudentDatabase::StudentDatabase() {
    numberOfStudents = 0;
}


// Return the number of student in the database
int StudentDatabase::getNumberOfStudents(){
    return numberOfStudents;
}


// Method to add a student to the database
void StudentDatabase::addStudent(Student s) {
    students[numberOfStudents] = s;
    numberOfStudents++;
}


// Method to remove a student from the database
void StudentDatabase::removeStudent(int studentId) {
    int index = -1;

    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i].getStudentId() == studentId) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Student not found" << endl;
    } else {
        for (int i = index; i < numberOfStudents - 1; i++) {
            students[i] = students[i + 1];
        }

        numberOfStudents--;

        cout << "Student removed from the database" << endl;
    }
}


// Method to search for a student by name
Student StudentDatabase::searchByName(string name) {
    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i].getStudentName() == name) {
            return students[i];
        }
    }
    cout << "Student not found";
}


// Method to print all students in the database
void StudentDatabase::printAllStudents() {
    for (int i = 0; i < numberOfStudents; i++) {
        students[i].printStudentInfo();
        cout << endl;
    }
}
//
// Created by Zaedul Islam on 2023-01-22.
//

#ifndef CPP_STUDENTDATABASE_H
#define CPP_STUDENTDATABASE_H

#include "student.h"

class StudentDatabase{
private:
    // Array to store students
    Student students[100];
    // Number of students in the database
    int numberOfStudents;
public:
    // Default constructor
    StudentDatabase();

    // Return the number of student in the database
    int getNumberOfStudents();

    // Method to add a student to the database
    void addStudent(Student s);
    // Method to remove a student from the database
    void removeStudent(int studentId);
    // Method to search for a student by name
    Student searchByName(string name);
    // Method to print all students in the database
    void printAllStudents();
};
#endif //CPP_STUDENTDATABASE_H

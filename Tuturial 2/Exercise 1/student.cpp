//
// Created by Zaedul Islam on 2023-01-22.
//
#include "student.h"


Student::Student(){}


Student::Student(string studentName, int studentId, string major){
    this->studentName = studentName;
    this->studentId = studentId;
    this->major = major;
}


int Student::getStudentId(){
    return studentId;
}


string Student::getStudentName(){
    return studentName;
}


// Method to print student information
void Student::printStudentInfo() {
    cout << "Student Name: " << studentName << endl;
    cout << "Student ID: " << studentId << endl;
    cout << "Major: " << major << endl;
}
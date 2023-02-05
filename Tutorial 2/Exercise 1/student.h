//
// Created by Zaedul Islam on 2023-01-22.
//

#ifndef CPP_STUDENT_H
#define CPP_STUDENT_H

#include <iostream>
using namespace std;


class Student{
private:
    string studentName;
    int studentId;
    string major;
public:
    Student();
    Student(string studentName, int studentId, string major);

    int getStudentId();
    string getStudentName();

    void printStudentInfo();
};
#endif //CPP_STUDENT_H

#include <iostream>
#include "Student.h"

using namespace std;

// ensures that the size of the array does not exceed 10
Student::Student(string name, string courses[], int size) : Person(name), taking(size) {
    for (int i = 0; i < taking && i < 10; i++) {
        this->courses[i] = courses[i];
    }
}

string Student::getCourses()
{
    string courseList = "";
    for (int i = 0; i < taking; i++) {
        courseList += courses[i];
        if (i < taking - 1) {
            courseList += ", ";
        }
    }
    return courseList;
}

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
using namespace std;

class Student : public Person {
    private:
        int taking;
        string courses[10];

    public:
        Student(string name, string courses[], int size);
        string getCourses();
};

#endif // STUDENT_H

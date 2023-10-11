/*
 * Name: Nanabanyin Abbiw
 * Course: CS 250
 * Last Updated: 10/10/2023
 * Description: This code uses a superclass and subclasses to store
 * the names of a student and professor and the courses that the
 * student is taking and displays an output
*/

// headers for the classes
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"

using namespace std;

int main()
{
    string studentCourses[] = {"Discrete Math", "CS250", "XLAB", "American History", "PHIL300"};
    Student student("Nanabanyin Abbiw", studentCourses, 5);
    cout << "Student Name: " << student.getName() << endl;
    cout << "Student Courses: " << student.getCourses() << endl;
    // stores the name and courses of the student using variables in the classes

    Professor professor("Dr. Vermilyer", "Spellman");
    cout << "Professor Name: " << professor.getName() << endl;
    cout << "Professor Office: " << professor.getOffice() << endl;
    // stores the name and office of the professor using variables in the classes

    return 0;
}

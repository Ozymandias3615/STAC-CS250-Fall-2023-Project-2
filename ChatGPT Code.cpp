#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(std::string name) : name(name) {}
    std::string getName() {
        return name;
    }
};

class Student : public Person {
private:
    int taking;
    std::string courses[10];

public:
    Student(std::string name, std::string courses[], int size) : Person(name), taking(size) {
        for (int i = 0; i < taking && i < 10; i++) {
            this->courses[i] = courses[i];
        }
    }

    std::string getCourses() {
        std::string courseList = "";
        for (int i = 0; i < taking; i++) {
            courseList += courses[i];
            if (i < taking - 1) {
                courseList += ", ";
            }
        }
        return courseList;
    }
};

class Professor : public Person {
private:
    std::string office;

public:
    Professor(std::string name, std::string office) : Person(name), office(office) {}

    std::string getOffice() {
        return office;
    }
};

int main() {
    std::string studentCourses[] = {"Math", "History", "Physics"};
    Student student("Alice", studentCourses, 3);
    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student Courses: " << student.getCourses() << std::endl;

    Professor professor("Dr. Smith", "Room 301");
    std::cout << "Professor Name: " << professor.getName() << std::endl;
    std::cout << "Professor Office: " << professor.getOffice() << std::endl;

    return 0;
}

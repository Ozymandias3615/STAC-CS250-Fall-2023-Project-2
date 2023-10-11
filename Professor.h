#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
using namespace std;

class Professor : public Person {
private:
    string office;

public:
    Professor(string name, string office);
    string getOffice();
};

#endif // PROFESSOR_H

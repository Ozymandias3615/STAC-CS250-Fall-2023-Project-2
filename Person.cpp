#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(string name) : name(name) {}

string Person::getName() {
    return name;
}

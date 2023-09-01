
#include "Teacher.h"
#include <iostream>

Teacher::Teacher(const std::string& name, int age, const std::string& subject)
    : Person(name, age), subject(subject) {}

void Teacher::displayInfo() const {
    Person::displayInfo();
    std::cout << ", Subject: " << subject << std::endl;
}
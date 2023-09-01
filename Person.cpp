
#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, int age)
    : name(name), age(age) {}

void Person::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age;
}
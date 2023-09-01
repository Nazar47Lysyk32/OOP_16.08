#pragma once

#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age);
    virtual void displayInfo() const;
};

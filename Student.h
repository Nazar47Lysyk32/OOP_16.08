#pragma once

#include "Person.h"
#include <iostream>

class Student : public Person {
private:
    int* grades;
    int numGrades;

public:
    Student(const std::string& name, int age, const int* grades, int numGrades);
    double calculateAverageGrade() const;
    virtual void displayInfo() const override;
    ~Student();
};


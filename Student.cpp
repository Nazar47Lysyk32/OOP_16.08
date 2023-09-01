
#include "Student.h"

Student::Student(const std::string& name, int age, const int* grades, int numGrades)
    : Person(name, age), numGrades(numGrades) {
    this->grades = new int[numGrades];
    for (int i = 0; i < numGrades; i++) {
        this->grades[i] = grades[i];
    }
}

double Student::calculateAverageGrade() const {
    if (numGrades == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += grades[i];
    }

    return static_cast<double>(sum) / numGrades;
}

void Student::displayInfo() const {
    Person::displayInfo();
    std::cout << ", Average Grade: " << calculateAverageGrade() << std::endl;
}

Student::~Student() {
    delete[] grades;
}
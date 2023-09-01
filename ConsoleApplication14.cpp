
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>

int main() {
    // Створення об'єктів студентів і вчителів
    int grades1[] = { 85, 90, 78 };
    int grades2[] = { 92, 88, 95 };
    Student student1("John", 20, grades1, 3);
    Student student2("Alice", 22, grades2, 3);
    Teacher teacher1("Mr. Smith", 35, "Mathematics");
    Teacher teacher2("Mrs. Johnson", 40, "History");

    // Створення масиву об'єктів Person
    Person* people[] = { &student1, &student2, &teacher1, &teacher2 };

    // Виведення інформації про кожну особу
    for (const auto& person : people) {
        person->displayInfo();
    }

    return 0;
}
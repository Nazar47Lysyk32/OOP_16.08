#pragma once

#include "Person.h"
#include <string>

    class Teacher : public Person {
    private:
        std::string subject;

    public:
        Teacher(const std::string& name, int age, const std::string& subject);
        virtual void displayInfo() const override;
    };
};


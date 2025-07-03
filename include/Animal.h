#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string name;

    public:
        Animal(std::string &init_name);
        virtual void MakeSound() const = 0;
        virtual ~Animal();
};
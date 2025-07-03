#pragma once

#include "Animal.h"

class Dog:public Animal
{
    private:

    public:
        Dog(std::string &init_name);
        void MakeSound() const override;
        ~Dog() override;
};
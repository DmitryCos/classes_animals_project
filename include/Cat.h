#pragma once

#include "Animal.h"

class Cat:public Animal
{
    private:
        
    public:
        Cat(std::string &name);
        void MakeSound () const override;
};
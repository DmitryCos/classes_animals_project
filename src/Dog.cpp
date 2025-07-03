#include "Dog.h"
#include <iostream>


Dog::Dog(std::string &init_name)
:Animal(init_name)
{
}

void Dog::MakeSound() const
{
    std::cout << "Bow" << std::endl;
}

Dog::~Dog()
{
    std::cout<<"The Dog by name: " << name << " is destroying" << std::endl;
}

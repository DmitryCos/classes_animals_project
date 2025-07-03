#include "Cat.h"
#include <iostream>

Cat::Cat(std::string &init_name)
:Animal(init_name)
{

}

void Cat::MakeSound() const
{
    std::cout << "Mew" << std::endl;
}

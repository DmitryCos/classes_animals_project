#include <vector>
#include <iostream>
#include <memory>
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main()
{
    std::vector<std::unique_ptr<Animal>> Animals;

    Animals.push_back(std::make_unique<Cat>("Tom"));
    Animals.push_back(std::make_unique<Dog>("Rexx"));

    for (const auto& animalPtr : Animals)
    {
        animalPtr->MakeSound();
    }
    return 0;
}

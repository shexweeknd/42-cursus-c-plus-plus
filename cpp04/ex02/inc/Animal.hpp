#pragma once

#define ANIMAL_HPP

#include "iostream"
#include "string"

#include <cstdlib>

class Animal 
{
    public:
        Animal();
        Animal(const Animal& src);
        Animal&     operator=(const Animal& src);

        virtual     ~Animal();

        virtual     void makeSound() const = 0;
        virtual     std::string getType() const;

        Animal(std::string _type);

    protected:
        std::string type;
};


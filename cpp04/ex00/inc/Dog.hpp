#pragma once

#define DOG_HPP

#include "iostream"
#include "string"
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string _type);
        Dog(const Dog& src);
        Dog& operator=(const Dog& src);

        virtual ~Dog();

        void makeSound() const;
};
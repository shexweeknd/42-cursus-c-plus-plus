#pragma once

#define CAT_HPP

#include "iostream"
#include "string"
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string _type);
        Cat(const Cat& src);
        Cat& operator=(const Cat& src);

        virtual ~Cat();

        void makeSound() const;
};
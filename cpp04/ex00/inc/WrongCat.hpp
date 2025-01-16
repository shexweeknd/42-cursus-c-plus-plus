#pragma once

#define WRONGCAT_HPP

#include "iostream"
#include "string"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string _type);
        WrongCat(const WrongCat& src);
        WrongCat& operator=(const WrongCat& src);

        virtual ~WrongCat();

        void makeSound() const;
};
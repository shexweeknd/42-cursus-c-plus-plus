#pragma once

#define WRONGANIMAL_HPP

#include "iostream"
#include "string"

class WrongAnimal 
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal&     operator=(const WrongAnimal& src);

        virtual     ~WrongAnimal();

        void        makeSound() const;
        virtual     std::string getType() const;

        WrongAnimal(std::string _type);

    protected:
        std::string type;
};


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : type(src.type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
#include "Animal.hpp"

Animal::Animal() : type("Default")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Default Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "Animal constructor called" << std::endl;
}
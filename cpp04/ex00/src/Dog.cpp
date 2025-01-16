#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type)
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    Animal::operator=(src);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Wouf Wouf Bitch !" << std::endl;
}
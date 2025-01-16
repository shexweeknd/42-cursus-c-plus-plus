#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    Animal::operator=(src);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Nigga !" << std::endl;
}
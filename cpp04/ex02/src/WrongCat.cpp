#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type)
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this == &src)
        return *this;
    WrongAnimal::operator=(src);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow Nigga !" << std::endl;
}
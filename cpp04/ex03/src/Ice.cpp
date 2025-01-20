#include "Ice.hpp"

Ice::~Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
    std::cout << "Ice copy constructor called" << std::endl;
    *this = src;
}

Ice & Ice::operator=(Ice const & src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "Ice assignation operator called" << std::endl;
    return (*this);
}

AMateria* Ice::clone() const
{
    std::cout << "Ice clone called" << std::endl;
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

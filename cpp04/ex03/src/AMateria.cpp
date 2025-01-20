#include "AMateria.hpp"

// Default class functions
AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

AMateria & AMateria::operator=(AMateria const & src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "AMateria assignation operator called" << std::endl;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

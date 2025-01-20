#include "Cure.hpp"

Cure::~Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = src;
}

Cure & Cure::operator=(Cure const & src)
{
    if (this != &src)
    {
        this->_type = src._type;
    }
    std::cout << "Cure assignation operator called" << std::endl;
    return (*this);
}

AMateria* Cure::clone() const
{
    std::cout << "Cure clone called" << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* shoots an Cure bolt at " << target.getName() << " *" << std::endl;
}

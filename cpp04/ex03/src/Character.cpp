#include "Character.hpp"

// TODO implement canonical Character function

// TODO implement this function
void AMateria::use(ICharacter& target)
{
    (void)target;
}

// INTERFACE CLASS FUNCTIONS
std::string const & AMateria::getName() const
{
    return (this->_name);
}

// TODO implement this function
void AMateria::equip(AMateria* m)
{
    (void)m;
}

// TODO implement this function
void AMateria::unequip(int idx)
{
    (void)idx;
}

// TODO implement this function
void AMateria::use(int idx, ICharacter& target)
{
    (void)idx;
    (void)target;
}

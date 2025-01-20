#pragma once

#define ICE_HPP

#include "iostream"

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const & src);
        Ice & operator=(Ice const & src);

        AMateria* clone() const;
        void use(ICharacter& target);
};
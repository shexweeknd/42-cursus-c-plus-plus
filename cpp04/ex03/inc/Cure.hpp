#pragma once

#define CURE_HPP

#include "iostream"

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const & src);
        Cure & operator=(Cure const & src);

        AMateria* clone() const;
        void use(ICharacter& target);
};
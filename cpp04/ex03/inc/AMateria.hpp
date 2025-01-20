#pragma once

#define AMATERIA_HPP

#include "iostream"
#include "string"
#include "Character.hpp"

class AMateria:
{
    protected:
        std::string _type;

    public:
        AMateria(std::string const & type);
        
        AMateria();
        ~AMateria();
        AMateria(AMateria const & src);
        AMateria & operator=(AMateria const & src);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

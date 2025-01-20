#pragma once

#define CHARACTER_HPP

#include "iostream"
#include "string"
#include "AMateria.hpp"

// TODO: declaration
class ICharacter
{
    protected:
        std::string _name;
        AMateria* _items[4];

    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
    public:
        Character(std::string const & name);
        ~Character();
        Character(Character const & src);
        Character & operator=(Character const & src);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#pragma once

#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        DiamondTrap &operator=(DiamondTrap const & src);
        ~DiamondTrap(void);

        // DiamondTrap actions
        void attack(std::string const & target);
        void whoAmI(void);

    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
};
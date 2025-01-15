#pragma once

#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ScavTrap &operator=(ScavTrap const &src);
        ~ScavTrap(void);

        // Scavtrap actions
        void attack(std::string const & target);
        void guardGate(void);

    private:
        bool _isGuardMode;
};
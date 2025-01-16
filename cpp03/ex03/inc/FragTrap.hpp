#pragma once 

#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        FragTrap &operator=(FragTrap const & src);
        ~FragTrap(void);

        // Fragtrap actions
        void highFivesGuys(void);
        // void attack(const std::string& target);
};
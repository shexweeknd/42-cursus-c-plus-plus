#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Default_ClapTrap")
{
    _name = "Default";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "WALAY! " << _name << " DiamondTrap is born!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "WALAY! DiamondTrap " << _name << " is born!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    *this = src;
    std::cout << "DiamondTrap " << _name << " is cloned!" << std::endl;
    return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & src)
{
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << _name << " is dead!" << std::endl;
    return ;
}

// DiamondTrap actions

void DiamondTrap::attack(std::string const & target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "DiamondTrap " << _name << " has no energy points and cannot attack!" << std::endl;
        return ;
    }
    else if (_hitPoints <= 0)
    {
        std::cout << "DiamondTrap " << _name << " has no hit points and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    return ;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My DiamondTrap name is: " << _name << " and my ClapTrap name is: " << ClapTrap::_name << std::endl;
    return ;
}

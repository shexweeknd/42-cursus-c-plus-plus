#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap()
{
    _name = "Default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "WALAY! Default DiamondTrap is born!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "WALAY! DiamondTrap " << _name << " is born!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src): ScavTrap(src), FragTrap(src)
{
    *this = src;
    return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
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
    if (this->_energyPoints <= 0)
    {
        std::cout << "DiamondTrap " << _name << " has no energy points and cannot attack!" << std::endl;
        return ;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "DiamondTrap " << _name << " has no hit points and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    return ;
}

void DiamondTrap::whoAmI(void)
{
    return ;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap is born! his name is: " << _name << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
    return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & src)
{
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " is dying!" << std::endl;
    return ;
}

// Claptrap actions
void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy! it is weak and can't attack" << std::endl;
        return;
    }
    else if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead! it can't attack you dumb ass!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead! stop biting a dead Claptrap" << std::endl;
        return;
    }
    if (_hitPoints < amount)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! now it has " << _hitPoints << " hit points" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy! it can't repair itself :(" << std::endl;
        return;
    }
    else if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead! you thought it can repair itself?" << std::endl;
        return;
    }
    else if (_hitPoints + amount > 10)
    {
        std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
    _hitPoints += amount;
    _energyPoints -= 1;
    return ;
}
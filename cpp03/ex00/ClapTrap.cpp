#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
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
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    return ;
}

// Claptrap actions
void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    return ;
}
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap is born!" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
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
    std::cout << "ClapTrap " << this->_name << " is dying!" << std::endl;
    return ;
}

// Claptrap actions
void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy! it is weak and can't attack" << std::endl;
        return;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead! it can't attack you dumb ass!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead! stop biting a dead Claptrap" << std::endl;
        return;
    }
    if (this->_hitPoints < amount)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! now it has " << this->_hitPoints << " hit points" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy! it can't repair itself :(" << std::endl;
        return;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead! you thought it can repair itself?" << std::endl;
        return;
    }
    else if (this->_hitPoints + amount > 10)
    {
        std::cout << "ClapTrap " << this->_name << " is already at full health!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    return ;
}
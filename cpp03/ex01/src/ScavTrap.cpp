#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(), _isGuardMode(false)
{
    _name = "Default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _isGuardMode = false;
    std::cout << "Default ScavTrap is born!" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    _isGuardMode = false;
    std::cout << "ScavTrap " << _name << " is born!" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
{
    *this = src;
    return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    this->_isGuardMode = src._isGuardMode;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " is dying!" << std::endl;
    return ;
}

// Scavtrap actions
void ScavTrap::attack(std::string const & target)
{
    if (this->_isGuardMode)
    {
        std::cout << "ScavTrap " << _name << " is in Gate keeper mode and cannot attack!" << std::endl;
        return ;
    }
    else if (this->_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy points and cannot attack!" << std::endl;
        return ;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is strong but has no hit points it arleady losts and cannot attack! What you thought?" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate(void)
{
    if (this->_isGuardMode)
    {
        std::cout << "ScavTrap " << _name << " is already in Gate keeper mode!" << std::endl;
        return ;
    }
    this->_isGuardMode = true;
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode!" << std::endl;
    return ;
}
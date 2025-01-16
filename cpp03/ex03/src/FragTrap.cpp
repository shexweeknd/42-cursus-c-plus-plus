#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    // _name = "Default";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Default FragTrap is born! his default name: "<< _name << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    // _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " is born!" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
    std::cout << "FragTrap " << _name << " is cloned!" << std::endl;
    return ;
}

FragTrap &FragTrap::operator=(FragTrap const & src)
{
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " is dead!" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    if (_energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no energy points and cannot high five!" << std::endl;
        return ;
    }
    else if (_hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no hit points and cannot high five!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << ": 'high fives ?'" << std::endl;
    return ;
}
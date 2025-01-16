#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "WALAY! Default FragTrap is born!" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "WALAY! FragTrap " << _name << " is born!" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
    *this = src;
    return ;
}

FragTrap &FragTrap::operator=(FragTrap const & src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " is dead!" << std::endl;
    return ;
}

// FragTrap actions
// void FragTrap::attack(std::string const & target)
// {
//     if (_energyPoints <= 0)
//     {
//         std::cout << "FragTrap " << _name << " has no energy points and cannot attack!" << std::endl;
//         return ;
//     }
//     else if (_hitPoints <= 0)
//     {
//         std::cout << "FragTrap " << _name << " has no hit points and cannot attack!" << std::endl;
//         return ;
//     }
//     std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
//     return ;
// }

void FragTrap::highFivesGuys(void)
{
    if (this->_energyPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no energy points and cannot high five!" << std::endl;
        return ;
    }
    else if (this->_hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name << " has no hit points and cannot high five!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << ": 'high fives ?'" << std::endl;
    return ;
}
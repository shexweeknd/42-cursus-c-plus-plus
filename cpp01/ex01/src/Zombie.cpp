#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "(null)" << " is raising." << std::endl;
    return;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " is raising." << std::endl;
    return;
}

Zombie::~Zombie() {
    std::cout << this->_name << " is dead." << std::endl;
    return;
}

void Zombie::announce() {
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::setName(std::string name) {
    this->_name = name;
    return;
}
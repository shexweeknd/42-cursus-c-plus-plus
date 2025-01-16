#pragma once
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce();
    private:
        std::string _name;
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );
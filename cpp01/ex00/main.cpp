#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return new Zombie(name);
}

void randomChump( std::string name )
{
    Zombie zombie = Zombie(name);
    zombie.announce();
    return;
}

int main(void)
{
    Zombie* zombie = newZombie("Elon Musk");
    zombie->announce();
    delete zombie;
    randomChump("Mark Zuckerberg");
    return (0);
}
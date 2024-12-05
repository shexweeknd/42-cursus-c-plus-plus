#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie = newZombie("Elon Musk");
    zombie->announce();
    delete zombie;
    randomChump("Mark Zuckerberg");
    return (0);
}
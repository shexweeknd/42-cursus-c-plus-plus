#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie *horde;

    horde = new Zombie[N];
    i = 0;
    while (i < N)
        horde[i++].setName(name);
    return (horde);
}
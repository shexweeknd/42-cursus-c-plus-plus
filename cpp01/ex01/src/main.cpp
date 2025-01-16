#include "Zombie.hpp"

int main(void)
{
    int n;
    int i;

    n = 5;
    Zombie *horde = zombieHorde(n, "Horde");
    if (!horde)
        return (1);
    i = 0;
    while (i < n)
        horde[i++].announce();
    delete  []horde;
    return (0);
}
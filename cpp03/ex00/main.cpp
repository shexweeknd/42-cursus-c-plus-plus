#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapOne("ClapOne");
    ClapTrap clapTwo("ClapTwo");

    clapOne.attack("ClapTwo");
    clapTwo.takeDamage(0);
    clapTwo.attack("ClapOne");
    clapOne.takeDamage(0);
    return (0);
}
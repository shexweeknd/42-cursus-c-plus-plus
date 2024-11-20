#include "functions.hpp"

int bezero(char *str, int size)
{
    int i;

    if (size <= 0)
        return (-1);
    i = 0;
    while (size--)
        str[i++] = 0;
    return (0);
}

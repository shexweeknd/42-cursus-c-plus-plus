#include <iostream>

int main(int arg, char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
                std::cout << (char)(argv[i][j] - 32);
            else
                std::cout << argv[i][j];
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
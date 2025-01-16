#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
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
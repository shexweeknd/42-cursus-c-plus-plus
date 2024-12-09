#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./ex04 [filename] [s1] [s2]" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    //TODO: Implement the replace function of s1 into s2 in the file
    return (0);
}
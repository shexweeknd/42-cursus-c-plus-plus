#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
    {
        std::cerr << "Usage: ./ex04 [filename] [s1] [s2]" << std::endl;
        return (1);
    }
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];

    std::ifstream   ifile(argv[1]);
    if (!ifile.is_open())
    {
        std::cerr << "Error: Could not open file" << std::endl;
        return (1);
    }

    std::ofstream   ofile((std::string(argv[1]) + ".replace").c_str());

    // prendre le contenu du fichier dans un gros string
    std::string     content;
    content.assign((std::istreambuf_iterator<char>(ifile)), (std::istreambuf_iterator<char>()));

    // remplacer les occurences de s1 par s2 de maniere recursive
    std::size_t     offset = 0;
    while (s1.length() && ((offset = content.find(s1)) != std::string::npos))
    {
        content.erase(offset, s1.length());
        content.insert(offset, s2);
    }
    // ecrire
    ofile << content;

    ofile.close();
    ifile.close();
    return (0);
}

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

    std::string     iline;
    std::ofstream   ofile((std::string(argv[1]) + ".replace").c_str());

    std::size_t     offset = 0;
    while (std::getline(ifile, iline))
    {
        while ((offset = iline.find(s1)) != std::string::npos)
        {
            iline.erase(offset, s1.length());
            iline.insert(offset, s2);
        }
        ofile << iline << std::endl;
    }
    ofile.close();
    ifile.close();
    return (0);
}
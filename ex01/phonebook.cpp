#include "phonebook.hpp"
#include <string>


// commands are: ADD, SEARCH, EXIT
int main(void)
{
    PhoneBook phonebook;
    std::string input;

    while (1)
    {
        std::cout << "your command > ", std::getline(std::cin, input);
        if (!input.compare("EXIT"))
            break ;
        else if (!input.compare("ADD"))
            phonebook.add();
        else if (!input.compare("SEARCH"))
            phonebook.search();
        else
            std::cout << "command unknown: valid commands are: ADD, SEARCH, EXIT" << std::endl;
    }
    std::cout << "Exiting the program" << std::endl;
    return (0);
}

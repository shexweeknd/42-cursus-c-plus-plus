#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook (void) {
    // std::cout << "Starting PhoneBook constructor..." << std::endl;
    contact[0].set_old(1);
    return ;
}

PhoneBook::~PhoneBook (void) {
    // std::cout << "Starting PhoneBook destructor..." << std::endl;
    return ;
}

int     PhoneBook::get_old_index(void)
{
    int i;

    i = 0;
    while (i < 8)
    {
        if (this->contact[i].is_old())
            return (i);
        i++;
    }
    return (-1);
}

void    PhoneBook::add(void)
{
    int         status;
    std::string buffer;
    int         i;

    status = 0;
    i = 0;
    while (status == 0)
    {
        if (this->contact[i].get_priv_memb('f').empty())
        {
            std::cout << "Enter first name: ", std::cin >> buffer;
            this->contact[i].set_priv_memb('f', buffer);
            std::cout << "Enter last name: ", std::cin >> buffer;
            this->contact[i].set_priv_memb('l', buffer);
            std::cout << "Enter nick name: ", std::cin >> buffer;
            this->contact[i].set_priv_memb('n', buffer);
            std::cout << "Enter phone number: ", std::cin >> buffer;
            this->contact[i].set_priv_memb('p', buffer);
            std::cout << "Enter darkest secret: ", std::cin >> buffer;
            this->contact[i].set_priv_memb('d', buffer);
            status = 1;
        }
        i++;
    }
    if (status == 0)
    {
        i = this->get_old_index();
        std::cout << "Enter first name: ", std::cin >> buffer;
        this->contact[i].set_priv_memb('f', buffer);
        std::cout << "Enter last name: ", std::cin >> buffer;
        this->contact[i].set_priv_memb('l', buffer);
        std::cout << "Enter nick name: ", std::cin >> buffer;
        this->contact[i].set_priv_memb('n', buffer);
        std::cout << "Enter phone number: ", std::cin >> buffer;
        this->contact[i].set_priv_memb('p', buffer);
        std::cout << "Enter darkest secret: ", std::cin >> buffer;
        this->contact[i].set_priv_memb('d', buffer);

        this->contact[i].set_old(0);
        if (i == 7)
            this->contact[0].set_old(1);
        else
            this->contact[i + 1].set_old(1);
        status = 1;
    }
    return;
}

void    PhoneBook::search(void)
{
    std::cout << "displaying contacts..." << std::endl;
    return;
}
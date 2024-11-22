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

void    PhoneBook::print_cols(std::string cols[], int size) const {
    int         i;

    i = 0;
    while (i < size)
    {
        std::cout << std::setw(1);
        std::cout << "|";
        std::cout << std::setw(10);
        std::cout << cols[i];
        i++;
    }
    std::cout << std::setw(1);
    std::cout << "|" << std::endl;
}

void    PhoneBook::vertical_sep(void) const {
    int i;

    i = 4;
    while (i > 0)
    {
        std::cout << "|----------";
        i--;
    }
    std::cout << "|" << std::endl;
}

// ameliorer sur les index int qui doivent passer en string
void    PhoneBook::search(void)
{
    int i;

    this->print_cols((std::string []){"index  ", "first name", "last name", "nickname "}, 4);
    this->vertical_sep();
    i = 0;
    while (i < 8)
    {
        if (!this->contact[i].get_priv_memb('f').empty())
        {
            this->print_cols((std::string []){"0", this->contact[i].get_priv_memb('f'), this->contact[i].get_priv_memb('l'), this->contact[i].get_priv_memb('n')}, 4);
            this->vertical_sep();
        }
        i++;
    }
    return ;
}
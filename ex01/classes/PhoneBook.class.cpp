#include "PhoneBook.class.hpp"

    PhoneBook::PhoneBook (void) {
    contact[0].set_old(1);
    return ;
}

    PhoneBook::~PhoneBook (void) {
    return ;
}

int     PhoneBook::get_old_index(void)
{
    int i;

    i = 0;
    while (i < CONTACT_NBR)
    {
        if (this->contact[i].is_old())
            return (i);
        i++;
    }
    return (-1);
}

void    PhoneBook::prompt_field(std::string message, char c, int index, int is_phone)
{
    std::string buffer;

    while (buffer.empty() || (is_phone && !isNumber(buffer.c_str())))
    {
        std::cout << message, std::getline(std::cin, buffer);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(0);
        }
        if (buffer.empty())
            std::cout << "Field cannot be empty, try again..." << std::endl;
        if (is_phone && !isNumber(buffer.c_str()))
            std::cout << "Phone number must be a number, try again..." << std::endl;
    }
    this->contact[index].set_priv_memb(c, buffer);
    buffer.clear();
}

void    PhoneBook::add(void)
{
    int         status;
    int         i;

    status = 0;
    i = 0;
    while (status == 0 && i < CONTACT_NBR)
    {
        if (this->contact[i].get_priv_memb('f').empty())
        {
            this->prompt_field("Enter first name: ", 'f', i, 0);
            this->prompt_field("Enter last name: ", 'l', i, 0);
            this->prompt_field("Enter nick name: ", 'n', i, 0);
            this->prompt_field("Enter phone number: ", 'p', i, 1);
            this->prompt_field("Enter darkest secret: ", 'd', i, 0);
            status = 1;
        }
        i++;
    }
    if (status == 0)
    {
        i = this->get_old_index();
        this->prompt_field("Enter first name: ", 'f', i, 0);
        this->prompt_field("Enter last name: ", 'l', i, 0);
        this->prompt_field("Enter nick name: ", 'n', i, 0);
        this->prompt_field("Enter phone number: ", 'p', i, 1);
        this->prompt_field("Enter darkest secret: ", 'd', i, 0);

        this->contact[i].set_old(0);
        if (i == (CONTACT_NBR - 1))
            this->contact[0].set_old(1);
        else
            this->contact[i + 1].set_old(1);
        status = 1;
    }
    return;
}

void    PhoneBook::search_contact(void)
{
    std::string buffer;
    int         index;

    if (this->contact[std::atoi(buffer.c_str())].get_priv_memb('f').empty())
    {
        std::cout << "contacts are still empty, please use ADD command" << std::endl;
        return ;
    }
    while (buffer.empty() || !isNumber(buffer.c_str()) || (std::atoi(buffer.c_str()) < 0 || std::atoi(buffer.c_str()) >= CONTACT_NBR) || this->contact[std::atoi(buffer.c_str())].get_priv_memb('f').empty())
    {
        std::cout << "enter index [0-" << toString(CONTACT_NBR - 1) << "]: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(0);
        }
        if (!isNumber(buffer.c_str()) || std::atoi(buffer.c_str()) < 0 || std::atoi(buffer.c_str()) >= CONTACT_NBR)
            std::cout << "please enter value in between [0-" << toString(CONTACT_NBR - 1) << "]: " << std::endl;
        if ((std::atoi(buffer.c_str()) > 0 && std::atoi(buffer.c_str()) < CONTACT_NBR) && this->contact[std::atoi(buffer.c_str())].get_priv_memb('f').empty())
            std::cout << "contact " << std::atoi(buffer.c_str()) << " doesn't exist yet, try existing contact " << std::endl;
    }
    index = std::atoi(buffer.c_str());
    std::cout << "first name: " << this->contact[index].get_priv_memb('f') << std::endl;
    std::cout << "last name: " << this->contact[index].get_priv_memb('l') << std::endl;
    std::cout << "nickname: " << this->contact[index].get_priv_memb('n') << std::endl;
    std::cout << "phone number: " << this->contact[index].get_priv_memb('p') << std::endl;
    std::cout << "darkest secret: " << this->contact[index].get_priv_memb('d') << std::endl;
}

void    PhoneBook::search(void)
{
    int i;
    std::string cols[] = {"index  ", "first name", "last name", "nickname "};
    std::string temp[4];

    this->print_cols(cols, 4, 0);
    this->vertical_sep();
    i = 0;
    while (i < CONTACT_NBR)
    {
        if (!this->contact[i].get_priv_memb('f').empty())
        {
            temp[0] = toString(i);
            temp[1] = this->contact[i].get_priv_memb('f');
            temp[2] = this->contact[i].get_priv_memb('l');
            temp[3] = this->contact[i].get_priv_memb('n');
            this->print_cols(temp, 4, 0);
            this->vertical_sep();
        }
        i++;
    }
    this->search_contact();
    return ;
}

// SEARCH PRINTERS

void    PhoneBook::print_cols(std::string cols[], int size, int is_old) const {
    int i;

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
    std::cout << "|";
    if (is_old)
        std::cout << "*";
    std::cout << std::endl;
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

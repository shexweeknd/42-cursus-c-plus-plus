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

void PhoneBook::prompt_field(std::string message, char c, int index)
{
    std::string buffer;

    while (buffer.empty())
    {
        std::cout << message, std::getline(std::cin, buffer);
        if (buffer.empty())
            std::cout << "Field cannot be empty, try again..." << std::endl;
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
    while (status == 0)
    {
        if (this->contact[i].get_priv_memb('f').empty())
        {
            this->prompt_field("Enter first name: ", 'f', i);
            this->prompt_field("Enter last name: ", 'l', i);
            this->prompt_field("Enter nick name: ", 'n', i);
            this->prompt_field("Enter phone number: ", 'p', i);
            this->prompt_field("Enter darkest secret: ", 'd', i);
            status = 1;
        }
        i++;
    }
    if (status == 0)
    {
        i = this->get_old_index();
        this->prompt_field("Enter first name: ", 'f', i);
        this->prompt_field("Enter last name: ", 'l', i);
        this->prompt_field("Enter nick name: ", 'n', i);
        this->prompt_field("Enter phone number: ", 'p', i);
        this->prompt_field("Enter darkest secret: ", 'd', i);

        this->contact[i].set_old(0);
        if (i == (CONTACT_NBR - 1))
            this->contact[0].set_old(1);
        else
            this->contact[i + 1].set_old(1);
        status = 1;
    }
    return;
}

void    PhoneBook::print_cols(std::string cols[], int size, int is_old) const {
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

#include <sstream>
std::string toString(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
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
    return ;
}
#include "Contact.class.hpp"

/*constructors and destructors*/
Contact::Contact (void) {
    // std::cout << "Starting Contact constructor..." << std::endl;
    return ;
}

Contact::~Contact (void) {
    // std::cout << "Starting Contact destructor..." << std::endl;
    return ;
}

/*accessors*/
std::string Contact::get_priv_memb (char cmd)
{
    if (cmd == 'f')
        return (this->first_name);
    else if (cmd == 'l')
        return (this->last_name);
    else if (cmd == 'n')
        return (this->nick_name);
    else if (cmd == 'p')
        return (this->phone_number);
    else if (cmd == 'd')
        return (this->darkest_secret);
    else
        return (NULL);
}

int Contact::is_old (void)
{
    return (this->isold);
}

void Contact::set_old (int value)
{
    if (value != 1 && value != 0)
        return ;
    this->isold = value;
    return ;
}

// A Ameliorer
int Contact::set_priv_memb(char cmd, std::string new_str)
{
    if (cmd != 'f' && cmd != 'l' && cmd != 'n' && cmd != 'p' && cmd != 'd')
        return (-1);
    if (cmd == 'f')
        this->first_name.replace(0, 10, new_str);
    else if (cmd == 'l')
        this->last_name.replace(0, 10, new_str);
    else if (cmd == 'n')
        this->nick_name.replace(0, 10, new_str);
    else if (cmd == 'p')
        this->phone_number.replace(0, 10, new_str);
    else if (cmd == 'd')
        this->darkest_secret.replace(0, 10, new_str);
    return (0);
}
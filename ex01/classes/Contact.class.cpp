#include "Contact.class.hpp"

/*constructors and destructors*/
Contact::Contact (void) {
    // std::cout << "Starting Contact constructor..." << std::endl;

    bezero(this->first_name, 10);
    bezero(this->last_name, 10);
    bezero(this->nick_name, 10);
    bezero(this->phone_number, 10);
    bezero(this->darkest_secret, 10);
    return ;
}

Contact::~Contact (void) {
    // std::cout << "Starting Contact destructor..." << std::endl;
    return ;
}

/*accessors*/
char *Contact::get_priv_memb (char cmd)
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

int Contact::set_priv_memb(char cmd, char *new_str)
{
    int i;

    if (!new_str || (cmd != 'f' && cmd != 'l' && cmd != 'n' && cmd != 'p' && cmd != 'd'))
        return (-1);
    i = 0;
    while ((i < 10) && new_str[i])
    {
        if (cmd == 'f')
            this->first_name[i] = new_str[i];
        else if (cmd == 'l')
            this->last_name[i] = new_str[i];
        else if (cmd == 'n')
            this->nick_name[i] = new_str[i];
        else if (cmd == 'p')
            this->phone_number[i] = new_str[i];
        else if (cmd == 'd')
            this->darkest_secret[i] = new_str[i];
        i++;
    }
    return (0);
}
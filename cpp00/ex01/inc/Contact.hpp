#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include "functions.hpp"
#include <string>

class Contact {
    public:

        Contact(void);
        ~Contact(void);

        std::string get_priv_memb(char cmd);
        int         set_priv_memb(char cmd, std::string new_str);
        int         is_old(void);
        void        set_old(int value);

    private:
        int     isold;

        std::string    first_name;
        std::string    last_name;
        std::string    nick_name;
        std::string    phone_number;
        std::string    darkest_secret;
};

#endif
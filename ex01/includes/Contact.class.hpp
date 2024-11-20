#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>
#include "functions.hpp"

class Contact {
    public:

        Contact(void);
        ~Contact(void);

        char *get_priv_memb(char cmd);
        int set_priv_memb(char cmd, char *new_str);

    private:

        char first_name[10];
        char last_name[10];
        char nick_name[10];
        char phone_number[10];
        char darkest_secret[10];
};

#endif
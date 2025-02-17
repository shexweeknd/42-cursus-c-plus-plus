#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

#define CONTACT_NBR 3

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void    add(void);
        void    search(void);

        int     get_old_index(void);
        void    prompt_field(std::string message, char c, int index, int is_phone);

    private:
        Contact contact[CONTACT_NBR];
        void    print_cols(std::string cols[], int size, int is_old) const;
        void    vertical_sep(void) const;
        void    search_contact(void);
};

#endif
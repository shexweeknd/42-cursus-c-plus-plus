#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void add(void);
        void search(void);

        int get_old_index(void);
        
    private:
        Contact contact[8];
};

#endif
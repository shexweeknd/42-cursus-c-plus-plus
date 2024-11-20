#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook (void) {
    std::cout << "Starting PhoneBook constructor..." << std::endl;
    int i;

    i = 0;
    while (i < 8)
    {
        // (Contact)(this->contact[i]);
        std::cout << this->contact[i].get_priv_memb('f') << std::endl;
        i++;
    }
    return ;
}

PhoneBook::~PhoneBook (void) {
    std::cout << "Starting PhoneBook destructor..." << std::endl;
    return ;
}
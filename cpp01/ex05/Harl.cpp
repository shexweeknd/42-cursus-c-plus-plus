#include "Harl.hpp"

Harl::Harl(void) {
    return;
}

Harl::~Harl(void) {
    return;
}

void Harl::debug(void) {
    std::cout << "[DEBUG]:" << "\n\t" << "Debug messages contain contextual information. They are mostly used for problem diagnosis." << std::endl << std::endl;
    return;
}

void Harl::info(void) {
    std::cout << "[INFO]:" << "\n\t" << "These messages contain extensive information. They are helpful for tracing program execution in a production environment." << std::endl << std::endl;
    return;
}

void Harl::warning(void) {
    std::cout << "[WARNING]:" << "\n\t" << "Warning messages indicate a potential issue in the system. However, it can be handled or ignored." << std::endl << std::endl;
    return;
}

void Harl::error(void) {
    std::cout << "[ERROR]:" << "\n\t" << "These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention." << std::endl << std::endl;
    return;
}

void Harl::complain(std::string level) {
    int i;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = 0;
    while (i < 4)
    {
        if (level.compare(levels[i]) == 0)
        {
            (this->*complaints[i])();
            return;
        }
        i++;
    }
    return;
}
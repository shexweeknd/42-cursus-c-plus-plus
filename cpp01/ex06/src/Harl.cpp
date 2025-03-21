#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}

Harl::~Harl()
{
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

void Harl::complain(std::string level)
{
    std::string     levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    size_t          i;
    void            (Harl::*methods[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    if (level.compare("DEBUG") != 0 && level.compare("INFO") != 0 && level.compare("WARNING") != 0 && level.compare("ERROR") != 0)
    {
        std::cout << "Invalid level" << std::endl;
        return ;
    }
    i = 0;
    while (i < (sizeof(levels) / sizeof(levels[0])))
    {
        (this->*methods[i])();
        if (levels[i].compare(level) == 0)
            return ;
        i++;
    }
    return ;
}
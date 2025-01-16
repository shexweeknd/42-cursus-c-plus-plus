#pragma once

#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    public:
        Harl(void);
        ~Harl(void);

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

        void complain(std::string level);
};
#pragma once

#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const &rhs);
        ~Fixed(void);
        Fixed &operator=(Fixed const &rhs);

    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
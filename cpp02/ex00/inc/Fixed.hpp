#pragma once

#define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed &operator=(Fixed const &rhs);
        int getRawBits(void) const;
    
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;

        void setRawBits(int const raw);
};
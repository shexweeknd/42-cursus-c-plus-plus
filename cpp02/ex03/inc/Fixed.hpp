#pragma once

#include <cmath>
#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);
        Fixed &operator=(Fixed const &rhs);

        bool    operator>(Fixed const &rhs);
        bool    operator<(Fixed const &rhs);
        bool    operator<=(Fixed const &rhs);
        bool    operator>=(Fixed const &rhs);
        bool    operator==(Fixed const &rhs);
        bool    operator!=(Fixed const &rhs);

        Fixed   operator+(Fixed const &rhs);
        Fixed   operator-(Fixed const &rhs);
        Fixed   operator*(Fixed const &rhs);
        Fixed   operator/(Fixed const &rhs);

        Fixed   operator++(void);
        Fixed   operator++(int);
        Fixed   operator--(void);
        Fixed   operator--(int);

        static  Fixed &min(Fixed &a, Fixed &b);
        static  const Fixed &min(Fixed const &a, Fixed const &b);
        static  Fixed &max(Fixed &a, Fixed &b);
        static  const Fixed &max(Fixed const &a, Fixed const &b);

        Fixed(int const value);
        Fixed(float const value);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
        static const float _inc = 0.00390625;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
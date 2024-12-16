#pragma once

#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    public:
        Point(void);
        Point(Point const &src);
        ~Point(void);
        Point &operator=(Point const &rhs);

        Fixed getX(void) const;
        Fixed getY(void) const;

        Point(Fixed const x, Fixed const y);

    private:
        Fixed _x;
        Fixed _y;
};

std::ostream &operator<<(std::ostream &o, Point const &rhs);
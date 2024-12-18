#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
    return ;
}

Point::Point(Point const &src)
{
    *this = src;
    return ;
}

Point::~Point(void)
{
    return ;
}

Point &Point::operator=(Point const &rhs)
{
    this->_x = rhs._x;
    this->_y = rhs._y;
    return (*this);
}

// constructor utils
Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{
    return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
    return ;
}

// getters and setters
Fixed Point::getX(void) const
{
    return (this->_x);
}

Fixed Point::getY(void) const
{
    return (this->_y);
}

std::ostream &operator<<(std::ostream &o, Point const &rhs)
{
    o << "Point(" << rhs.getX() << ", " << rhs.getY() << ")";
    return (o);
}
#include "Fixed.hpp"

// canonical form

Fixed::Fixed(void) : _fixedPointValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

// 6 comparison operators
bool Fixed::operator<(Fixed const &rhs)
{
    return (this->_fixedPointValue < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const &rhs)
{
    return (this->_fixedPointValue > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs)
{
    return (this->_fixedPointValue <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs)
{
    return (this->_fixedPointValue >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs)
{
    return (this->_fixedPointValue == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs)
{
    return (this->_fixedPointValue != rhs.getRawBits());
}

// 4 arithmetic operators
Fixed Fixed::operator+(Fixed const &rhs)
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs)
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs)
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs)
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

// 4 increment and decrement operators

// prefix
Fixed Fixed::operator++(void)
{
    *this = Fixed(this->toFloat() + this->_inc);
    return (*this);
}

Fixed Fixed::operator--(void)
{
    *this = Fixed(this->toFloat() - this->_inc);
    return (*this);
}

//postfix
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

// 4 static functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

// TODO : create this
const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

// Constructors Utils
Fixed::Fixed(int const value)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << this->_fractionalBits;
    return ;
}

Fixed::Fixed(float const value)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
    return ;
}

// Conversion Utils
float Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> this->_fractionalBits);
}

// Getters and Setters
int Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
    return ;
}

// Global operator overload
std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}
#include "Point.hpp"
#include "Fixed.hpp"

Fixed eval(Point const vone, Point const vtwo, Point const point)
{
    return (Fixed(vone.getX() - point.getX()) * Fixed(vtwo.getY() - point.getY()) - Fixed(vone.getY() - point.getY()) * Fixed(vtwo.getX() - point.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    return (((eval(a, b, point) > 0 && eval(b, c, point) > 0 && eval(c, a, point) > 0)) || ((eval(a, b, point) < 0 && eval(b, c, point) < 0 && eval(c, a, point) < 0)));
}
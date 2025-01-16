/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:57:29 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/28 14:39:58 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

// online visualizer: https://planetcalc.com/8108/
int main(void)
{
	Point a(0, 0);
    Point b(0, 4);
    Point c(4, 0);
    Point point(-7, 4);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is outside the triangle." << std::endl;
	
    return (0);
}

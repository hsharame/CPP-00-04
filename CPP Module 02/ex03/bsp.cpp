/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:57:03 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/21 13:25:30 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area(Point const p1, Point const p2, Point const p3)
{
	Fixed result = Fixed(0.5f) * ((p1.getX().getRawBits() * (p2.getY().getRawBits() 
			- p3.getY().getRawBits())) +
			(p2.getX().getRawBits() * (p3.getY().getRawBits() - p1.getY().getRawBits())) +
			(p3.getX().getRawBits() * (p1.getY().getRawBits() - p2.getY().getRawBits())));
	if (result < 0)
		return result *  Fixed(-1);
	return result;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	total = area(a, b, c);
	Fixed	triangle1 = area(point, a, b);
	Fixed	triangle2 = area(point, b, c);
	Fixed	triangle3 = area(point, c, a);
	std::cout << "total: " << total.getRawBits() << std::endl;
	std::cout << "triange 1: " << triangle1.getRawBits() << std::endl;
	std::cout << "triange 2: " << triangle2.getRawBits() << std::endl;
	std::cout << "triange 3: " << triangle3.getRawBits() << std::endl;
	if (triangle1.getRawBits() == 0 || triangle2.getRawBits() == 0 
		|| triangle3.getRawBits() == 0)
		return (false);
	if (total.getRawBits() == triangle1.getRawBits() + triangle2.getRawBits()
		 + triangle3.getRawBits())
		return (true);
	return (false);
}

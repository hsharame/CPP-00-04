/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:57:49 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/21 13:48:37 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}
Point::Point(float const xi, float const yi): x(xi), y(yi)
{
}

Point::Point(Point const &src)
{
	*this = src;
}

Point::~Point()
{
}

Point& Point::operator=(Point const &rhs)
{
	this->~Point();
	new (this) Point(rhs.x.toFloat(), rhs.y.toFloat());
	return *this;
}

Fixed	Point::getX() const
{
	return this->x;
}

Fixed	Point::getY() const
{
	return this->y;
}

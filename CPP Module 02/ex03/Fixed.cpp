/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:31:34 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/21 10:24:16 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed::Fixed(int const value)
{
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called. The old value "
	<< this->_value << " is updated to " << raw << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_fractionalBits);
}

int		Fixed::toInt(void) const
{
	return this->_value >> this->_fractionalBits;
}

std::ostream&	operator<<(std::ostream &stream, Fixed const& value)
{
	stream << value.toFloat();
	return stream;
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_value > rhs.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_value < rhs.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_value >= rhs.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_value <= rhs.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->_value == rhs.getRawBits())
		return true;
	else
		return false;
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_value != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_value += 1;
	return temp;
}

Fixed&	Fixed::operator--()
{
	this->_value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_value -= 1;
	return temp;
}

Fixed&	Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

const Fixed&	Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

Fixed&	Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

const Fixed&	Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;	
}

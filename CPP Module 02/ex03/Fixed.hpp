/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:31:31 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/21 10:24:23 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int	_value;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;		
		Fixed&	operator=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		static Fixed&		min(Fixed &lhs, Fixed &rhs);
		static const Fixed&	min(Fixed const &lhs, Fixed const &rhs);
		static Fixed&		max(Fixed &lhs, Fixed &rhs);
		static const Fixed&	max(Fixed const &lhs, Fixed const &rhs);
};

std::ostream&	operator<<(std::ostream &stream, Fixed const& value);

#endif

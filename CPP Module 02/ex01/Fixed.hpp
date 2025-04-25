/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:31:31 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/13 17:25:32 by hsharame         ###   ########.fr       */
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

		Fixed&	operator=(Fixed const &rhs);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &stream, Fixed const& value);

#endif

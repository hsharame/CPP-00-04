/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:28:46 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/21 13:44:37 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	{
		Fixed a;
		Fixed const b( 10 );
		Fixed c( 42.42f );
		Fixed d;
		a = Fixed( 1234.4321f );
		d = Fixed(10.42f);
		Fixed f(d);
		if (b == d)
			std::cout << b << " and " << d << " are equal" << std::endl;
		else
			std::cout << b << " " << b.getRawBits() << " " << b.toInt() << " and " 
				<< d << " " << d.getRawBits() << " " << d.toInt()<< " are not equal"
				<< std::endl;
		if (a == d)
			std::cout << "a and d are equal"<< std::endl;
		else
			std::cout << "a and d are not equal" << std::endl;
		if (a > b)
			std::cout << a << " is higher" << std::endl;
		if (f >= d)
			std::cout << "operator >= works" << std::endl;
		if (c != d)
			std::cout << "operator != works" << std::endl << std::endl;

		std::cout << "The sum of a and b is " << a + b << std::endl<<std::endl;

		std::cout << "c is " << c << std::endl;
		std::cout << "c++ is " << c++ << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "++c is " << ++c << std::endl;
		std::cout << "c-- is " << c-- << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "--c is " << --c << std::endl;
		std::cout << "c is " << c << std::endl << std::endl;
	}
	{
		Fixed a;
		Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl << std::endl;
	}
	{
		Fixed a;
		Fixed b(a);
		std::cout << "L'adresse de a est " << &a << std::endl;
		std::cout << "L'adresse de b est " << &b << std::endl << std::endl;
	}
	{
		Fixed c;
		Fixed d;
		std::cout << "L'adresse de c est " << &c << std::endl;
		std::cout << "L'adresse de d est " << &d << std::endl;
		d = c;
		std::cout << "L'adresse de d est " << &d << std::endl;
	}
		return 0;
}

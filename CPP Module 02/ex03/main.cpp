/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:28:46 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/21 13:28:12 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	{
		std::cout << "Test 1" << std::endl;
		Point const a(0,0), b(3,5), c(6,0), p(3,0);
		if (bsp(a, b, c, p))
			std::cout << "Le point est a l'interieur" << std::endl;
		else
			std::cout << "Le point est a l'exterieur ou sur une arrete" << std::endl;
	}
	{
		std::cout << "Test 2" << std::endl;
		Point a(0,0), b(5,0), c(2.7,5), p(2.7,2);
		if (bsp(a, b, c, p))
			std::cout << "Le point est a l'interieur" << std::endl;
		else
			std::cout << "Le point est a l'exterieur ou sur une arrete" << std::endl;
	}
	{
		std::cout << "Test 3" << std::endl;
		Point a(0.0f,0.0f), b(5.0f,0.0f), c(2.7f,5.0f), p(6.3f,6.8f);
		if (bsp(a, b, c, p))
			std::cout << "Le point est a l'interieur" << std::endl;
		else
			std::cout << "Le point est a l'exterieur ou sur une arrete" << std::endl;
	}
	{
		std::cout << "Test 4" << std::endl;
		Point a(0,0), b(5,0), c(2.7,5), p(2.7,5);
		if (bsp(a, b, c, p))
			std::cout << "Le point est a l'interieur" << std::endl;
		else
			std::cout << "Le point est a l'exterieur ou sur une arrete" << std::endl;
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:24:00 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 16:42:39 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		Weapon club = Weapon("arme");
		HumanA carl("Carl", club);
		HumanB sam("Sam");
		carl.attack();
		sam.attack();
		club.setType("pistolet");
		carl.attack();
		sam.attack();
		sam.setWeapon(club);
		carl.attack();
		sam.attack();
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:53:44 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 16:15:49 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	{
		DiamondTrap	Harry("Harry");
		Harry.whoAmI();
		Harry.displayStatus();
		Harry.attack("Voldemort");
		Harry.takeDamage(30);
		Harry.displayStatus();
		Harry.guardGate();
		Harry.highFivesGuys();
		Harry.beRepaired(20);
		Harry.displayStatus();
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		DiamondTrap	Dobby;
		Dobby.displayStatus();
		Dobby.attack("Lucius");
		Dobby.takeDamage(50);
		Dobby.whoAmI();
	}
	return 0;
}

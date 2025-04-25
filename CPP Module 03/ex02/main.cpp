/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:45:52 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 12:36:06 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		FragTrap	Severus("Severus");
		Severus.displayStatus();
		Severus.attack("Albus");
		Severus.highFivesGuys();
		Severus.displayStatus();
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		ClapTrap	Luna("Luna");
		FragTrap	Bellatrix("Bellatrix");
		ScavTrap	Lucius("Lucius");
		Luna.displayStatus();
		Luna.attack("Nargole");
		Bellatrix.highFivesGuys();
		Lucius.guardGate();
		Bellatrix.takeDamage(130);
		Bellatrix.attack("Neville");
		Bellatrix.displayStatus();
		Lucius.displayStatus();
		Luna = Lucius;
		Luna.displayStatus();
		Luna = Bellatrix;
		Luna.displayStatus();
	}
	return (0);
}

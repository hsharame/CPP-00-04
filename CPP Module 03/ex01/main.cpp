/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:20:45 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/28 16:34:55 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	{
		ScavTrap	Hermione("Hermione");
		Hermione.displayStatus();
		Hermione.attack("Drago");
		Hermione.displayStatus();
		Hermione.takeDamage(4);
		Hermione.displayStatus();
		Hermione.guardGate();
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		ClapTrap	Neville("Neville");
		Neville.attack("Drago");
		Neville.displayStatus();
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		ScavTrap	Ron;
		Ron.guardGate();
		Ron.takeDamage(200);
		Ron.displayStatus();
	}
	return 0;
}

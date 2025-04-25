/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:21:37 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 11:41:17 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie = newZombie("boo");
	randomChump("foo");
	randomChump("doo");
	Zombie* zombie2 = newZombie("hoo");
	zombie->announce();
	zombie2->announce();
	delete	zombie;
	delete	zombie2;

	return 0;
}

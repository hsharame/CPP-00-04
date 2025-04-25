/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:46:31 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 12:33:06 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	n = 42;
	Zombie*	horde = zombieHorde(n, "Foo");
	if (!horde)
		return (-1);

	/*horde[1].announce();
	horde[0].announce();
	horde[6].announce();*/

	for(int i = 0; i < n; i++)
		horde[i].announce();
		
	delete	[] horde;
}

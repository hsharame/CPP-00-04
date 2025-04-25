/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:46:23 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 12:26:59 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Incorrect number of zombies" << std::endl;
		return NULL;
	}
	Zombie*	horde = new Zombie[N];
	for(int	i = 0; i < N; i++)
		horde[i].setName(name, i);
	return	horde;
}

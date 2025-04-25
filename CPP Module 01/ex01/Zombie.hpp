/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:46:26 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 12:36:33 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		int			_index;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	setName(std::string name, int index);
		void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif

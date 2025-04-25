/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 11:46:28 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 12:36:29 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " " << this->_index << ": BraiiiiiiinnnzzzZ..." 
		<< std::endl;
}

void	Zombie::setName(std::string name, int index)
{
	this->_name = name;
	this->_index = index;
	std::cout << this->_name << " is born" << std::endl;
}

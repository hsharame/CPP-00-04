/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:15:07 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 16:41:45 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB " << this->_name << " is born" << std::endl;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->_name << " died" << std::endl;
}

void	HumanB::attack()
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

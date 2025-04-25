/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:10:27 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/31 16:21:06 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << this->_name << " is born"
	<< " and he holds the weapon " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " died" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}

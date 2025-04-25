/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:25:57 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 16:50:14 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	this->_energy = ScavTrap::_energy;
	this->_hit = FragTrap::_hit;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_name = "default";
	std::cout << "\033[1;94mA nameless DiamondTrap is born\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name),_name(name)
{
	this->_energy = ScavTrap::_energy;
	this->_hit = FragTrap::_hit;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "\033[1;94mDiamondTrap " << this->_name << " is born\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "\033[1;94mCopy constructor DiamondTrap called\033[0m" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;94mDiamondTrap " << this->_name << " died\033[0m" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "\033[1;94mCopy assignment operator DiamondTrap called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energy = rhs._energy;
		this->_attackDamage = rhs._attackDamage;
		this->_hit = rhs._hit;
	}
	return *this;
}

void			DiamondTrap::whoAmI()
{
	std::cout << "\033[1;94mMy name is " << this->_name << " and my ClapTrap name is "
	<< ClapTrap::_name << "\033[0m." << std::endl;
}

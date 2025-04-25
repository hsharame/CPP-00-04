/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:20:48 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 16:50:03 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "\033[95mA nameless ScavTrap is born\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "\033[95mScavTrap " << this->_name << " is born\033[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "\033[95mCopy constructor ScavTrap called\033[0m" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[95mScavTrap " << this->_name << " died\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "\033[95mCopy assignment operator ScavTrap called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energy = rhs._energy;
		this->_attackDamage = rhs._attackDamage;
		this->_hit = rhs._hit;
	}
	return *this;
}

void		ScavTrap::attack(const std::string &target)
{
	if (this->_energy == 0 || this->_hit == 0)
	{
		std::cout << "\033[95mScavTrap " << this->_name << " can't attack " << target 
		<< " because he has no more energy.\033[0m" << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "\033[95mScavTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!\033[0m" << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "\033[95mScavTrap " << this->_name <<
	" is now in Gate keeper mode.\033[0m" << std::endl;
}

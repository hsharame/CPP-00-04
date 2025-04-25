/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:45:50 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 16:50:19 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "\033[33mA nameless FragTrap is born\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "\033[33mFragTrap " << this->_name << " is born\033[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "\033[33mCopy constructor FragTrap called\033[0m" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[33mFragTrap " << this->_name << " died\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "\033[33mCopy assignment operator ScavTrap called\033[0m" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energy = rhs._energy;
		this->_attackDamage = rhs._attackDamage;
		this->_hit = rhs._hit;
	}
	return *this;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "\033[33mFragTrap " << this->_name <<
	" asks him to high five.\033[0m" << std::endl;
}

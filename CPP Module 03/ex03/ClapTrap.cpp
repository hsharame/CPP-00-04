/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:48:44 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 16:50:07 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hit(10), _energy(10), _attackDamage(0)
{
	std::cout << "A nameless ClapTrap is born" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor ClapTrap called" << std::endl;
	*this = src;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " died" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assignment operator ClapTrap called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energy = rhs._energy;
		this->_attackDamage = rhs._attackDamage;
		this->_hit = rhs._hit;
	}
	return *this;
}

void		ClapTrap::attack(const std::string &target)
{
	if (this->_energy == 0 || this->_hit == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack " << target 
		<< " because he has no more energy or hitpoints." << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
	<< this->_attackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit == 0 || this->_energy == 0)
	{
		std::cout << "ClapTrap " << this->_name << 
		" is at the end of his life and cannot take "
		<< amount << " point damage." << std::endl;
		return ;
	}
	if (amount >= this->_hit)
		amount = this->_hit;
	this->_hit -= amount;
	std::cout << "ClapTrap " << this->_name << " takes damage, he loses " << amount <<
	" hit points." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0 || this->_hit == 0)
	{
		(void)amount;
		std::cout << "ClapTrap " << this->_name << 
		" can't repair itself because he has no more energy or hitpoints" << std::endl;
		return ;
	}
	this->_hit += amount;
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " repairs itself, it gets " << amount <<
	" hit points back." << std::endl;
}
void		ClapTrap::displayStatus() const
{
	std::cout << "\033[1;32mSTATUS: Name: [" << this->_name << "] Hit: [" << this->_hit 
	<< "] Energy: [" << this->_energy << "] Attack damage: [" << this->_attackDamage << "]\033[0m" << std::endl;
}

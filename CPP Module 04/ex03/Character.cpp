/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:52:48 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 16:24:05 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character::Character(const Character &other) : _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &other)
{
	std::cout << "ici" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
			{
				std::cout << this->_inventory[i]->getType() << std::endl;
				delete this->_inventory[i];
			}
		}
		for (int i = 0; i < 4; i++)
		{
			std::cout << other._inventory[i]->getType() << std::endl;
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	int i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i > 3)
	{
		delete m;
		return ;
	}
	this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
		return ;
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

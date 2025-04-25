/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:22:46 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 15:15:27 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._stock[i])
			this->_stock[i] = other._stock[i]->clone();
		else
			this->_stock[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_stock[i])
				delete this->_stock[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other._stock[i])
				this->_stock[i] = other._stock[i]->clone();
			else
				this->_stock[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	int i = 0;
	while (i < 4 && this->_stock[i])
		i++;
	if (i > 3)
	{
		delete m;
		return ;
	}
	this->_stock[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i]->getType() == type)
			return this->_stock[i]->clone();
	}
	return 0;
}

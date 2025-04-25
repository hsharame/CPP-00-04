/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:25:00 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 11:25:57 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal is born" << std::endl;
	setType("Animal");
}

Animal::~Animal()
{
	std::cout << "Animal is gone" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
}

Animal& Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes a sound" << std::endl;
}

void	Animal::setType(std::string s_type)
{
	this->type = s_type;
}

std::string	Animal::getType() const
{
	return this->type;
}

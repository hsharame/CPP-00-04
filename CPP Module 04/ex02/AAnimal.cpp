/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:25:00 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 11:26:21 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal is born" << std::endl;
	setType("AAnimal");
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal is gone" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
}

AAnimal& AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	AAnimal::setType(std::string s_type)
{
	this->type = s_type;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

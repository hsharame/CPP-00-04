/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:33:44 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 16:59:40 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "🐱 Little sweet WrongCat is born" << std::endl;
	setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "🐱 Little sweet WrongCat is gone" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void		WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow !" << std::endl;
}

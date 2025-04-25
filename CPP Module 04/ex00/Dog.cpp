/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:41:46 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/26 16:54:18 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "🐕 Dog is born" << std::endl;
	setType("Dog");
}

Dog::~Dog()
{
	std::cout << "🐕 Dog is gone" << std::endl;
}

Dog::Dog(Dog const &src)
{
	*this = src;
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void		Dog::makeSound() const
{
	std::cout << "Woof woof !" << std::endl;
}

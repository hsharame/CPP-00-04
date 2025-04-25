/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:35:33 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/26 16:53:42 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "🐱 Little sweet cat is born" << std::endl;
	setType("Cat");
}

Cat::~Cat()
{
	std::cout << "🐱 Little sweet cat is gone" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void		Cat::makeSound() const
{
	std::cout << "Meow meow !" << std::endl;
}

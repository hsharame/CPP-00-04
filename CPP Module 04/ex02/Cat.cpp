/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:35:33 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 17:59:44 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "🐱 Little sweet cat is born" << std::endl;
	setType("Cat");
	this->_brain = new Brain();
	this->_brain->setIdeas("Humans love me!");
}

Cat::~Cat()
{
	std::cout << "🐱 Little sweet cat is gone" << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat const &src)
{
	std::cout << "🐱 Little sweet cat copy is born" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void		Cat::makeSound() const
{
	std::cout << "Meow meow !" << std::endl;
}

Brain*		Cat::getBrain() const
{
	return	this->_brain;
}

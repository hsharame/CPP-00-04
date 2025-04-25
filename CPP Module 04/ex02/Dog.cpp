/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:41:46 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 17:59:31 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "🐕 Dog is born" << std::endl;
	setType("Dog");
	this->_brain = new Brain();
	this->_brain->setIdeas("I love this ball!");
}

Dog::~Dog()
{
	std::cout << "🐕 Dog is gone" << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const &src)
{
	std::cout << "🐕 Dog copy is born" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void		Dog::makeSound() const
{
	std::cout << "Woof woof !" << std::endl;
}

Brain*		Dog::getBrain() const
{
	return this->_brain;
}

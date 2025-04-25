/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:25:04 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 17:55:10 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "🧠 Brain appeared" << std::endl;
}

Brain::~Brain()
{
	std::cout << "🧠 Brain disappeared" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "🧠 Brain copy appeared" << std::endl;
	*this = src;
}

Brain& Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

void	Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

std::string	Brain::getIdea(int i)
{
	if (i < 0 || i > 99)
		return ("this is not a valid index");
	return this->_ideas[i];
}

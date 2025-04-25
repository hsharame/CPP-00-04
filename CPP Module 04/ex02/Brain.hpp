/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:24:51 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/28 17:50:52 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain
{
	protected:
		std::string	_ideas[100];
	
	public:
		Brain();
		Brain(Brain const &src);
		virtual ~Brain();
		Brain& operator=(Brain const &rhs);
		void	setIdeas(std::string idea);
		std::string	getIdea(int i);
};

#endif

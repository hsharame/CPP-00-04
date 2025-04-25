/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:24:16 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/26 16:53:11 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();
		Animal& operator=(Animal const &rhs);
		
		virtual void		makeSound() const;
		void		setType(std::string s_type);
		std::string	getType() const;
};

#endif

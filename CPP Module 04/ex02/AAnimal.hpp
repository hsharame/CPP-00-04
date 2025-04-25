/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:24:16 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 11:22:13 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include "iostream"

class AAnimal
{
	protected:
		std::string	type;
	
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();
		AAnimal& operator=(AAnimal const &rhs);
		
		virtual void		makeSound() const = 0;
		void		setType(std::string s_type);
		std::string	getType() const;
};

#endif

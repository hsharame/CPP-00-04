/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:01:08 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/27 15:00:10 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void		search();
		void		display_phonebook();
		void		add_contact();
		std::string	format(std::string str);

	private:
	
		Contact _contact[8];
		int		_index;
};

#endif

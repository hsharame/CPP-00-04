/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:01:08 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/24 14:43:11 by hsharame         ###   ########.fr       */
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

		void	display_contact(Contact to_display) const;
		void	display_phonebook() const;
		void	add_contact();

	private:
	
		Contact _contact1;
		Contact _contact2;
		Contact _contact3;
		Contact _contact4;
		Contact _contact5;
		Contact _contact6;
		Contact _contact7;
		Contact _contact8;
};

#endif

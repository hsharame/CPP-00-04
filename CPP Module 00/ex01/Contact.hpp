/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:04:41 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/27 15:14:41 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void		display_contact() const;
		std::string	get_fname() const;
		std::string	get_lname() const;
		std::string	get_nickname() const;
		void		set_fname(std::string first_name);
		void		set_lname(std::string last_name);
		void		set_nickname(std::string nickname);
		void		set_number(std::string number);
		void		set_secret(std::string secret);

	private:
	
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif

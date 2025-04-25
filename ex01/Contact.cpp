/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:04:44 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/27 15:15:41 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_fname() const
{
	return this->_first_name;
}

std::string	Contact::get_lname() const
{
	return this->_last_name;
}

std::string	Contact::get_nickname() const
{
	return this->_nickname;
}

void	Contact::display_contact() const
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void	Contact::set_fname(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::set_lname(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_number(std::string number)
{
	this->_phone_number = number;
}

void	Contact::set_secret(std::string secret)
{
	this->_darkest_secret = secret;
}

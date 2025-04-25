/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:04:36 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/28 12:26:42 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Welcome! ☎️" << std::endl;
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Goodbye!" << std::endl;
	return;
}

std::string	PhoneBook::format(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return std::string(10 - str.length(), ' ') + str;
}

void	PhoneBook::search()
{
	std::string	index;

	this->display_phonebook();
	if (this->_index > 0)
	{
		std::cout << "Please, enter the contact index to display: ";
		std::getline(std::cin, index);
		if (!index.empty() && index.size() == 1 && (index[0] >= '0' && index[0] < '8') 
			&& index[0] < this->_index + '0')
			this->_contact[(index[0] - '0') % 8].display_contact();
		else
			std::cout << "Incorrect index" << std::endl;
	}
}

void	PhoneBook::display_phonebook()
{
	std::cout << PhoneBook::format("Index") << "|"
		<< PhoneBook::format("First Name") << "|"
		<< PhoneBook::format("Last Name") << "|"
		<< PhoneBook::format("Nickname") << "|" << std::endl
		<< std::string(44, '-') << std::endl;
	if (this->_index == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	for (int i = 0; i < this->_index && i < 8; i++)
	{
		std::cout << PhoneBook::format(std::to_string(i)) << "|"
			<< PhoneBook::format(this->_contact[i].get_fname()) << "|"
			<< PhoneBook::format(this->_contact[i].get_lname()) << "|"
			<< PhoneBook::format(this->_contact[i].get_nickname()) << "|"
			<< std::endl;
	}
}

void	PhoneBook::add_contact()
{
	std::string	str;

	while (true)
	{
		std::cout << "Enter first name: ";
		if (std::getline(std::cin, str) && !str.empty())
		{
			this->_contact[this->_index % 8].set_fname(str);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter last name: ";
		if (std::getline(std::cin, str) && !str.empty())
		{
			this->_contact[this->_index % 8].set_lname(str);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter nickname: ";
		if (std::getline(std::cin, str) && !str.empty())
		{
			this->_contact[this->_index % 8].set_nickname(str);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter phone number: ";
		if (std::getline(std::cin, str) && !str.empty())
		{
			this->_contact[this->_index % 8].set_number(str);
			break;
		}
	}
	while (true)
	{
		std::cout << "Enter the darkest secret: ";
		if (std::getline(std::cin, str) && !str.empty())
		{
			this->_contact[this->_index % 8].set_secret(str);
			break;
		}
	}
	std::cout << "Contact has been added." << std::endl;
	this->_index++;
}

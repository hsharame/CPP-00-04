/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:04:28 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/27 15:08:14 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	book;
	std::string	cmd;

	while (true)
	{
		std::cout << "> ";
		std::getline (std::cin, cmd);
		if (cmd == "ADD")
			book.add_contact();
		else if (cmd == "SEARCH")
			book.search();
		else if (cmd == "EXIT")
			break;
	}
	return 0;
}

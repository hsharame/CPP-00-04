/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:27:36 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/04 15:56:42 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char* argv[])
{
	Harl	Harl;

	if (argc != 2)
	{
		std::cout << "What should I complain about?" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		for (int j = 0; (size_t)j < str.length(); j++)
			str[j] = (char)std::tolower(str[j]);
		Harl.complain(str);
		str.clear();
	}
	return 0;
}

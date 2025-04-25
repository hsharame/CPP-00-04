/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:49:49 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/03 15:37:55 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Incorrect number of parameters" << std::endl;
		return (-1);
	}
	std::string		str = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		str3, str4;
	std::ifstream	ifs(str);
	if (!ifs)
	{
		std::cerr << "Can't open file " << str << std::endl;
		return (-1);
	}
	std::ofstream	ofs(str + ".replace");

	while (std::getline (ifs, str3))
	{
		size_t	last_pos = 0, pos = 0;
		while (true)
		{
			pos = str3.find(s1, last_pos);
			if (pos == std::string::npos)
				break;
			str4.append(str3, last_pos, pos - last_pos);
			str4.append(s2);
			last_pos = pos + s1.length();
		}
		str4.append(str3, last_pos);
		ofs << str4 << std::endl;
		str4.clear();
	}
	ofs.close();
	ifs.close();
	
	return 0;
}

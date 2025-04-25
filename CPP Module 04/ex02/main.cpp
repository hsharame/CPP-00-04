/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:09:13 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 11:40:33 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	{
		//AAnimal Animal; //not possible
		const AAnimal* Animal1 = new Dog();
		Animal1->makeSound();
		std::cout << "Ceci est " << Animal1->getType() << std::endl;
		delete Animal1;
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		AAnimal* Tableau[10];
		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				Tableau[i] = new Dog();
			else 
				Tableau[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
		{
			std::cout << "[ " << i << " ] : " << Tableau[i]->getType() << ": ";
			Tableau[i]->makeSound();
		}
		for (int i = 0; i < 10; i++)
			delete Tableau[i];
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		AAnimal* test = NULL;
		if (test)
			test->makeSound();
		else
			std::cout << "Pointeur NULL" << std::endl;
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:43:16 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 17:06:41 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "\033[1;32mTest de sujet\033[0m" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		std::cout << "\033[1;32mWrong test de sujet\033[0m" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		std::cout << "\033[1;32mEncore un test\033[0m" << std::endl;
		const	Animal* animal = new Dog();
		std::cout << "Ceci est un " << animal->getType() << std::endl;
		std::cout << animal->getType() << ": ";
		animal->makeSound();
		delete animal;
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		std::cout << "\033[1;32mEt encore un test\033[0m" << std::endl;
		WrongCat	Cat;
		std::cout << "Ceci est un " << Cat.getType() << std::endl;
		std::cout << Cat.getType() << ": ";
		Cat.makeSound();
		WrongAnimal	Animal;
		std::cout << "Ceci est un " << Animal.getType() << std::endl;
		std::cout << Animal.getType() << ": ";
		Animal.makeSound();
		WrongAnimal* test = new WrongCat();
		std::cout << "Ceci est un " << test->getType() << std::endl;
		std::cout << test->getType() << ": ";
		test->makeSound();
		delete test;
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		std::cout << "\033[1;32mEt encore un autre test\033[0m" << std::endl;
		Cat	chat;
		std::cout << "Ceci est un " << chat.getType() << std::endl;
		std::cout << chat.getType() << ": ";
		chat.makeSound();
		Animal	A;
		std::cout << "Ceci est un " << A.getType() << std::endl;
		std::cout << A.getType() << ": ";
		A.makeSound();
		Animal* test = new Cat();
		std::cout << "Ceci est un " << test->getType() << std::endl;
		std::cout << test->getType() << ": ";
		test->makeSound();
		delete test;
	}
	return 0;
}

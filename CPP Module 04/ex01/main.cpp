/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:09:13 by hsharame          #+#    #+#             */
/*   Updated: 2025/03/03 17:58:03 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	{
		Animal* Tableau[10];
		for (int i = 0; i < 5; i++)
			Tableau[i] = new Dog();
		for (int i = 5; i < 10; i++)
			Tableau[i] = new Cat();
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
		Dog chien;
		Cat chat;
		chien.makeSound();
		std::cout << chien.getType() << ": " << chien.getBrain()->getIdea(3) << std::endl;
		chat.makeSound();
		std::cout << chat.getType() << ": " << chat.getBrain()->getIdea(3) << std::endl;
		chat.getBrain()->setIdeas("I'm hungry, I'm hungry, I'm hungry!");
		std::cout << chat.getType() << ": " << chat.getBrain()->getIdea(3) << std::endl;
		chat.makeSound();

	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		Dog	basic;
		{
			Dog tmp = basic;
			std::cout << &basic << " " << &tmp << std::endl;
		}
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		Cat	basic;
		{
			Cat tmp = basic;
			std::cout << &basic << " " << &tmp << std::endl;
			std::cout << basic.getBrain() << " " << tmp.getBrain() << std::endl;
		}
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		j->makeSound();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::string(50, '_') << std::endl << std::endl;
	{
		const Animal* test = new Dog();
		std::cout << test->getType() << ": ";
		test->makeSound();
		//test->getBrain() //not possible
		delete test;
	}
	std::cout << std::endl << std::string(20, '_') << "Test de copie simple" << std::string(20, '_') << std::endl << std::endl;
	{
		Dog	Berger;
		std::cout << "Berger: " << Berger.getBrain()->getIdea(45) << std::endl;
		Berger.getBrain()->setIdeas("Where have my sheep gone?");
		std::cout << "Berger: " << Berger.getBrain()->getIdea(45) << std::endl;
		Dog Chihuahua(Berger);
		std::cout << "Chihuahua: " << Chihuahua.getBrain()->getIdea(45) << std::endl;
	}
	std::cout << std::endl << std::string(10, '_') << "Test de copie avec constructeur de copie" << std::string(10, '_') << std::endl << std::endl;
	{
		Dog *Bichon = new Dog;
		Bichon->getBrain()->setIdeas("I'm afraid of the fly!");
		std::cout << "Bichon: " << Bichon->getBrain()->getIdea(45) << std::endl;
		Dog	*Malinois = new Dog(*Bichon);
		delete Bichon;
		std::cout << "Malinois: " << Malinois->getBrain()->getIdea(45) << std::endl;
		delete Malinois;
	}
	std::cout << std::endl << std::string(10, '_') << "Test de copie avec l'operateur d'affectation" << std::string(10, '_') << std::endl << std::endl;
	{
		Cat	*Cookie = new Cat();
		Cat	*Serge = new Cat();
		std::cout << "Cookie: " << Cookie->getBrain()->getIdea(87) << std::endl;
		std::cout << "Serge: " << Serge->getBrain()->getIdea(87) << std::endl;
		Cookie->getBrain()->setIdeas("I am so cute!");
		std::cout << "Cookie: " << Cookie->getBrain()->getIdea(87) << std::endl;
		std::cout << "Serge: " << Serge->getBrain()->getIdea(87) << std::endl;
		*Serge = *Cookie;
		delete Cookie;
		std::cout << "Serge: " << Serge->getBrain()->getIdea(87) << std::endl;
		delete Serge;
	}
	return 0;
}

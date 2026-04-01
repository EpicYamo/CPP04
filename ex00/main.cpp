/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:43:11 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 02:28:05 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "\n-- Test Given in the subject PDF --\n" << std::endl;
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
	{
		std::cout << "\n-- WrongAnimal and WrongCat Version --\n" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
	}
	{
		std::cout << "\n-- Array of Animals Test --\n" << std::endl;
		const int size = 4;
		Animal *animals[size];
		int i = 0;
		while (i < size)
		{
			if (i < size / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
			i++;
		}
		std::cout << "\nSound test in loop:\n" << std::endl;
		i = 0;
		while (i < size)
		{
			std::cout << animals[i]->getType() << " says: ";
			animals[i]->makeSound();
			i++;
		}
		std::cout << "\nDeleting Animals in loop:\n" << std::endl;
		i = 0;
		while (i < size)
		{
			delete animals[i];
			i++;
		}
	}
	return (0);
}
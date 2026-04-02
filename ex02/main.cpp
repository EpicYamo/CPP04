/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:43:11 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 03:58:34 by aaycan           ###   ########.fr       */
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
		const Animal* j = new Dog();	
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
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
	{
		std::cout << "\n-- Deep Copy Test --\n" << std::endl;
		Cat *the_cat = new Cat();
		the_cat->add_idea(0, "I want to knock over the things on the table.");
		Cat *copy_cat = new Cat(*the_cat);
		std::cout << "The Cat's Idea 0: " << the_cat->get_idea(0) << std::endl;
		std::cout << "Copied Cat's Idea 0: " << copy_cat->get_idea(0) << std::endl;
		copy_cat->add_idea(0, "I want to pee on the couch.");
		std::cout << "The Cat's Idea 0: " << the_cat->get_idea(0) << std::endl;
		std::cout << "Copied Cat's Replaced Idea 0: " << copy_cat->get_idea(0) << std::endl;
		delete copy_cat;
		delete the_cat;
	}
	return (0);
}
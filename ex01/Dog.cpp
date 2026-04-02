/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:46:36 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 03:34:08 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	dogs_brain_ = new Brain();
}

Dog::Dog (std::string type) : Animal(type)
{
	std::cout << "Dog Type constructor called" << std::endl;
	dogs_brain_ = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
	dogs_brain_ = new Brain(*(other.dogs_brain_));
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
		delete dogs_brain_;
		dogs_brain_ = new Brain(*(other.dogs_brain_));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete dogs_brain_;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

void Dog::add_idea(unsigned int index, std::string idea)
{
	this->dogs_brain_->add_idea(index, idea);
}

std::string	Dog::get_idea(unsigned int index) const
{
	return (this->dogs_brain_->get_idea(index));
}

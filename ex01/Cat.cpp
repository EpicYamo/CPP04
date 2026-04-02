/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:46:27 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 03:34:02 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	cats_brain_ = new Brain();
}

Cat::Cat (std::string type) : Animal(type)
{
	std::cout << "Cat Type constructor called" << std::endl;
	cats_brain_ = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	cats_brain_ = new Brain(*(other.cats_brain_));
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
		delete cats_brain_;
		cats_brain_ = new Brain(*(other.cats_brain_));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete cats_brain_;
}

void Cat::makeSound() const
{
	std::cout << "Meeeooowwww" << std::endl;
}

void Cat::add_idea(unsigned int index, std::string idea)
{
	this->cats_brain_->add_idea(index, idea);
}

std::string	Cat::get_idea(unsigned int index) const
{
	return (this->cats_brain_->get_idea(index));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:42:37 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 02:14:38 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal (std::string type) : type_(type)
{
	std::cout << "WrongAnimal Type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type_(other.type_)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal class doesn't have a specific sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type_);
}

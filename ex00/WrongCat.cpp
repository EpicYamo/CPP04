/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:42:15 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 02:13:49 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	type_ = "WrongCat";
}

WrongCat::WrongCat (std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat Type constructor called" << std::endl;
	type_ = type;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MAAAAWWWWW (smth is really wrong with this cat?? He never gets to maaow)" << std::endl;
}

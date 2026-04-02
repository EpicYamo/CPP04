/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 02:42:52 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 03:12:24 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:54:22 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/20 12:30:19 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas_[i] = "Empty idea"; 
		i++;
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		int i = 0;
		while (i < 100)
		{
			ideas_[i] = other.ideas_[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void Brain::add_idea(unsigned int index, std::string idea)
{
	if (index < 100)
		this->ideas_[index] = idea;
}

std::string	Brain::get_idea(unsigned int index) const
{
	if (index < 100)
		return (this->ideas_[index]);
	return ("_index_is_out_of_bounds_");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 00:46:19 by aaycan            #+#    #+#             */
/*   Updated: 2026/04/02 03:58:21 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type_;
	public:
		Animal();
		Animal(std::string type_);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal(); 

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif

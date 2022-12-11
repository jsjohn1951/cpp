/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:27:54 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 14:50:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

//! Constructors

Animal::Animal(): type("Random Animal")
{
	std::cout << this->getType() << ": Default Constructor" << std::endl;
}

Animal::Animal(const Animal &a): type(a.type)
{
	std::cout << this->getType() << ": Animal Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Animal::~Animal()
{
	std::cout << this->getType() << ": Animal Destructor" << std::endl;
}

//! End Destructor

//! Operators

Animal	&Animal::operator=(const Animal &a)
{
	std::cout << "Animal: Copy Assignment Operator Overload" << std::endl;
	if (this != &a)
		this->set_type(a.getType());
	return (*this);
}

//! End Operators

//! Member functions

void	Animal::set_type(std::string t)
{
	this->type = t;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "This human doesn't appreciate being called an animal!" << std::endl;
}

//! End Member functions

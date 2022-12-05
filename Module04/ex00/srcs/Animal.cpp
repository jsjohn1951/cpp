/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:27:54 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 19:52:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

//! Constructors

Animal::Animal(): type("Random Animal")
{
	std::cout << this->get_type() << ": Default Constructor" << std::endl;
}

Animal::Animal(Animal &a): type(a.type)
{
	std::cout << this->get_type() << ": Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Animal::~Animal()
{
	std::cout << this->get_type() << ": Destructor" << std::endl;
}

//! End Destructor

//! Operators

Animal	&Animal::operator=(Animal &a)
{
	std::cout << "Copy Assignment Operator Overload" << std::endl;
	if (this != &a)
		this->set_type(a.get_type());
	return (*this);
}

//! End Operators

//! Member functions

void	Animal::set_type(std::string t)
{
	this->type = t;
}

std::string	Animal::get_type(void)
{
	return (this->type);
}

void	Animal::makeSound(void)
{
	std::cout << "this human doesn't appreciate being called an animal" << std::endl;
}

//! End Member functions

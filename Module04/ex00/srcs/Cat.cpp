/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:43:41 by wismith           #+#    #+#             */
/*   Updated: 2022/12/06 17:33:12 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

//! Constructors

Cat::Cat()
{
	this->set_type("Cat");
	std::cout << this->getType() << ": Default Constructor" << std::endl;
}

Cat::Cat(const Cat &c) : Animal()
{
	this->set_type(c.getType());
	std::cout << this->getType() << ": Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Cat::~Cat()
{
	std::cout << this->getType() << ": Destructor" << std::endl;
}

//! End Destructor

//! Operators

Cat	&Cat::operator=(const Cat &c)
{
	std::cout << "Copy Assignment Operator Overload" << std::endl;
	if (this != &c)
		this->set_type(c.getType());
	return (*this);
}

//! End Operators

//! Member functions

void	Cat::makeSound(void) const
{
	std::cout << "Meoow Meoow!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:13:35 by wismith           #+#    #+#             */
/*   Updated: 2022/12/06 17:33:23 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

//! Constructors

Dog::Dog()
{
	this->set_type("Dog");
	std::cout << this->getType() << ": Default Constructor" << std::endl;
}

Dog::Dog(const Dog &d) : Animal()
{
	this->set_type(d.getType());
	std::cout << this->getType() << ": Copy Constructor" << std::endl;
}

//! end Constructors

//! Destructor

Dog::~Dog()
{
	std::cout << this->getType() << ": Destructor" << std::endl;
}

//! end Destructor

//! operators

Dog	&Dog::operator=(const Dog &d)
{
	std::cout << "Copy Assignment Operator Overload" << std::endl;
	if (this != &d)
		this->set_type(d.getType());
	return (*this);
}

//! end operators

//! Member functions

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark!" << std::endl;
}

//! End Member functions

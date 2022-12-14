/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:28:13 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 15:47:18 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

//! Constructors

WrongAnimal::WrongAnimal()
{
	this->set_type("Random Wrong Animal");
	std::cout << this->getType() << ": Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w)
{
	this->set_type(w.getType());
	std::cout << this->getType() << ": WrongAnimal Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

WrongAnimal::~WrongAnimal()
{
	std::cout << this->getType() << ": Destructor" << std::endl;
}

//! End Destructor

//! Operators

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &w)
{
	std::cout << this->getType() << ": WrongAnimal Copy Assignment Operator Overload" << std::endl;
	if (this != &w)
		this->set_type(w.getType());
	return (*this);
}

//! End operators

//! Member functions

void	WrongAnimal::set_type(std::string t)
{
	this->type = t;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal was convicted of treason! I've been framed!" << std::endl;
}

//! End Member functions

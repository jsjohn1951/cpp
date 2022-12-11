/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:31:38 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 15:47:21 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

//! Constructors

WrongCat::WrongCat()
{
	this->set_type("WrongCat");
	std::cout << this->getType() << ": Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &w) : WrongAnimal()
{
	if (this != &w)
		this->set_type(w.getType());
	std::cout << this->getType() << ": WrongCat Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

WrongCat::~WrongCat()
{
	std::cout << this->getType() << ": Destructor" << std::endl;
}

//! End Destructor

//! Operators

WrongCat	&WrongCat::operator=(const WrongCat &w)
{
	std::cout << this->getType() << ": WrongCat Copy Assignment Operator Overload" << std::endl;
	if (this != &w)
		this->set_type(w.getType());
	return (*this);
}

//! End Operators

//! Member functions

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

//! End Member functions

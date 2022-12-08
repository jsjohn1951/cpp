/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:26:32 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 23:33:49 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

//! Constructors

Ice::Ice()
{
	this->setType("ice");
	// std::cout << this->getType() << " Default Constructor" << std::endl;
}

Ice::Ice(const Ice &c) : AMateria("ice")
{
	if (this != &c)
		*this = c;
	// std::cout << this->getType() << " Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Ice::~Ice()
{
	// std::cout << this->getType() << " Destructor" << std::endl;
}

//! End Destructor

//! Operators

Ice	&Ice::operator=(const Ice &c)
{
	if (this != &c)
		this->setType(c.getType());
	return (*this);
}

//! End Operators

//! Member functions

void	Ice::use(ICharacter& target)
{
	std::cout << this->getType() << ": " << static_cast<char>(34)
			<< "* shoots an ice bolt at " << target.getName() << " *"
			<< static_cast<char>(34) << std::endl;
}

Ice	*Ice::clone(void) const
{
	Ice *ice = new Ice(*this);
	return (ice);
}

//! End Member functions
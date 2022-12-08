/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:04:40 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 17:01:25 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

//! Constructors

Cure::Cure()
{
	this->setType("cure");
	// std::cout << "Cure Default Contructor" << std::endl; 
}

Cure::Cure(const Cure &c) : AMateria("cure")
{
	this->setType(c.getType());
	// std::cout << this->getType() << " Copy Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Cure::~Cure()
{
	// std::cout << "Cure Destructor" << std::endl;
}

//! End Destructor

//! Operators

Cure	&Cure::operator=(const Cure &c)
{
	if (this != &c)
		this->setType(c.getType());
	return (*this);
}

//! End Operators

//! Member functions

void	Cure::use(ICharacter& target)
{
	std::cout << this->getType() << ": " << static_cast<char>(34)
			<< "* heals " << target.getName() << "'s wounds *"
			<< static_cast<char>(34) << std::endl;
}

Cure	*Cure::clone(void) const
{
	Cure *cure = new Cure;
	return (cure);
}

//! End Member functions

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:55:54 by wismith           #+#    #+#             */
/*   Updated: 2022/12/07 23:23:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

//! Constructors

AMateria::AMateria(): type("Type Not Set")
{
	std::cout << this->getType() << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria(const AMateria &am)
{
	if (this != &am)
		this->setType(am.getType());
	std::cout << this->getType() << ": AMateria Copy Constructor" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->setType(type);
	std::cout << this->getType() << ": AMateria Type Constructor" << std::endl;
}

//! End Constructors

//! Destructor

AMateria::~AMateria()
{
	std::cout << this->getType() << ": AMateria Destructor" << std::endl;
}

//! End Destructor

//! Operators

AMateria	&AMateria::operator=(const AMateria &am)
{
	if (this != &am)
		this->setType(am.getType());
	return (*this);
}

//! End Operators

//! Member functions

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
		std::cout << this->getType() << ": " << static_cast<char>(34)
			<< "* shoots random objects aimlessly " << target.getName() << " *"
			<< static_cast<char>(34) << std::endl;
}

//! End Member functions

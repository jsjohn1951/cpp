/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:55:54 by wismith           #+#    #+#             */
/*   Updated: 2022/12/07 21:03:03 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

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

AMateria::~AMateria()
{
	std::cout << this->getType() << ": AMateria Destructor" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &am)
{
	if (this != &am)
		this->setType(am.getType());
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	if (this->getType() == "ice")
		std::cout << "Ice:" << static_cast<char>(34)
			<< "* shoots an ice bolt at " << target.getName() << " *"
			<< static_cast<char>(34) << std::endl;
	else if (this->getType() == "cure")
		std::cout << "Cure:" << static_cast<char>(34)
			<< "* heals " << target.getName() << "'s wounds *"
			<< static_cast<char>(34) << std::endl;
}

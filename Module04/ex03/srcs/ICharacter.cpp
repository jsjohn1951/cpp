/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:28:30 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 17:14:18 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"
#include "../includes/AMateria.hpp"

//! Constructors

ICharacter::ICharacter()
{
	// std::cout << "ICharacter Default Constructor" << std::endl;
}

ICharacter::ICharacter(const ICharacter &ch)
{
	// std::cout << "ICharacter Copy Constructor" << std::endl;
	if (this != &ch)
		*this = ch;
}

//! End Constructors

//! Destructor

ICharacter::~ICharacter()
{
	// std::cout << "ICharacter Destructor" << std::endl;
}

//! End Destructor

//! Operators

ICharacter	&ICharacter::operator=(const ICharacter &ch)
{
	std::cout << "ICharacter assignment operator overload" << std::endl;
	if (this != &ch)
		*this = ch;
	return (*this);
}

//! End Operators

//! Member functions

//! End Member functions

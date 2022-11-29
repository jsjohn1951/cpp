/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:45 by wismith           #+#    #+#             */
/*   Updated: 2022/11/29 16:35:18 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

//! Constructors

ClapTrap::ClapTrap(): Name("Random Dude"), hit_p(10), energy_p(10), Attack_d(0)
{
	std::cout  << this->Name << ": Default constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &c)
{
	*this = c;
	std::cout  << this->Name << ": Copy constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name(name), hit_p(10), energy_p(10), Attack_d(0)
{
	std::cout << this->Name << ": Name constructor" << std::endl;
}

//! End Constructors

//! Destructor

ClapTrap::~ClapTrap()
{
	std::cout  << this->Name << ": Destructor" << std::endl;
}

//! End Destructor

//! Operators

ClapTrap &ClapTrap::operator=(ClapTrap &c)
{
	if (this != &c)
		*this = c;
	return (*this);
}

//! End Operators

//! Member functions

void	ClapTrap::attack(const std::string &target)
{
	std::cout << this->Name << " is attacking " << target << " for eating his cookie"
	<< std::endl;
	std::cout << target << " took " << this->Attack_d << " attack damage"
	<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_p -= amount;
	std::cout << this->Name << " took " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	(this->energy_p ? this->energy_p--, this->hit_p += amount : this->energy_p = 0);
	(this->energy_p ? std::cout << this->Name
		<< " healed with +" << amount << " attack damage" << std::endl
	: std::cout << this->Name << " has no energy points for healing!" << std::endl);
}

//! End Member functions

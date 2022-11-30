/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:45 by wismith           #+#    #+#             */
/*   Updated: 2022/11/30 21:19:16 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

//! Constructors

ClapTrap::ClapTrap(): Name("Random Dude"), hit_p(10), energy_p(10), Attack_d(0)
{
	std::cout << "ClapTrap " << this->Name << ": Default constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &c)
{
	*this = c;
	std::cout << "ClapTrap " << this->Name << ": Copy constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name(name), hit_p(10), energy_p(10), Attack_d(0)
{
	std::cout << "ClapTrap " << this->Name << ": Name constructor" << std::endl;
}

//! End Constructors

//! Destructor

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << ": Destructor" << std::endl;
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
	if (this->get_hp() && this->get_ep())
	{
		this->set_ep(this->get_ep() - 1);
		std::cout << "ClapTrap " << this->Name << " attacked " << target << "'s anime collection!" << std::endl;
		std::cout << "\tCausing " << this->get_attack_d() << " of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " is either dead or does not have enough energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	long am = (long) this->get_hp() - (long) amount;

	if (this->get_hp())
	{
		this->set_hp(am);
		std::cout << "ClapTrap " << this->Name << " has taken " << amount << " damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << ": death is a part of life... " << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->get_hp() && this->get_ep())
	{
		this->set_ep(this->get_ep() - 1);
		this->set_hp(this->get_hp() + amount);
		std::cout << "ClapTrap " << this->Name << " is healing by " << amount << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->Name << " is either dead or does not have enough energy points!" << std::endl;
}

//** displays attributes

void	ClapTrap::retrieveAttr(void)
{
	std::cout << "ClapTrap " << this->Name << " Attr :" << std::endl << std::endl;
	std::cout << "\tHit points :\t" << this->get_hp() << std::endl;
	std::cout << "\tEnergy points :\t" << this->get_ep() << std::endl;
	std::cout << "\tAttack damage :\t" << this->get_attack_d() << std::endl;
}

//** setters and getters

int		ClapTrap::set_hp(long hp)
{
	int	rtn = 0;

	(this->get_hp() > 0 && hp > 0 ? this->hit_p = (unsigned int)hp: this->hit_p = 0, rtn = 1);
	return (rtn);
}

int		ClapTrap::set_ep(long ep)
{
	int	rtn = 0;

	(this->get_hp() > 0 ? this->energy_p = (unsigned int)ep: rtn = 1);
	return (rtn);
}

int		ClapTrap::set_attack_d(long ad)
{
	int	rtn = 0;

	(this->get_hp() > 0 ? this->Attack_d = (unsigned int)ad : rtn = 1);
	return (rtn);
}

unsigned int	ClapTrap::get_hp(void)
{
	return (this->hit_p);
}

unsigned int	ClapTrap::get_ep(void)
{
	return (this->energy_p);
}

unsigned int	ClapTrap::get_attack_d(void)
{
	return (this->Attack_d);
}

//** end setters and getters

//! End Member functions

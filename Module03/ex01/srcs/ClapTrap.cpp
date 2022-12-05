/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:45 by wismith           #+#    #+#             */
/*   Updated: 2022/12/02 20:22:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

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
	std::cout << this->get_name() << ": ClapTrap Assignment overload operator." << std::endl;
	return (*this);
}

//! End Operators

//! Member functions

void	ClapTrap::attack(const std::string &target)
{
	if (this->get_hp() && this->get_ep())
	{
		this->set_ep(this->get_ep() - 1);
		std::cout << this->Name << " attacked " << target << "!";
		std::cout << " Causing " << this->get_attack_d() << " of damage." << std::endl;
	}
	else
		std::cout << this->Name << " can't hurt anyone!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	long am = (long) this->get_hp() - (long) amount;

	this->set_hp(am);
	if (this->get_hp())
		std::cout << this->Name << " has taken " << amount << " damage!" << std::endl;
	else
		std::cout << this->Name << ": has died." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->get_hp() && this->get_ep())
	{
		this->set_hp(this->get_hp() + amount);
		this->set_ep(this->get_ep() - 1);
		std::cout << this->Name << " is healing by " << amount << "." << std::endl;
	}
	else
		std::cout << this->Name << " can't be healed!" << std::endl;
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

void		ClapTrap::set_hp(long hp)
{
	(this->get_hp() > 0 && hp > 0 ? this->hit_p = static_cast<unsigned int>(hp): this->hit_p = 0);
}

void		ClapTrap::set_ep(long ep)
{
	(this->get_hp() > 0 ? this->energy_p = static_cast<unsigned int>(ep): this->energy_p = (this->energy_p + 0));
}

void		ClapTrap::set_attack_d(long ad)
{
	(this->get_hp() > 0 ? this->Attack_d = static_cast<unsigned int>(ad) : this->Attack_d = (this->Attack_d + 0));
}

void		ClapTrap::set_name(const std::string &name)
{
	this->Name = name;
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

std::string		ClapTrap::get_name(void)
{
	return (this->Name);
}

//** end setters and getters

//! End Member functions

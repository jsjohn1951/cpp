/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:12:25 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 14:45:41 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Name = "Random Dude";
	this->set_hp(100);
	this->set_ep(50);
	this->set_attack_d(20);
	std::cout << "ScavTrap " << this->get_name() << ": Default constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &scav): ClapTrap()
{
	this->set_name(scav.get_name());
	this->set_hp(scav.get_hp());
	this->set_ep(scav.get_ep());
	this->set_attack_d(scav.get_attack_d());
	std::cout << "ScavTrap " << this->get_name() << ": Copy constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->set_name(name);
	this->set_hp(100);
	this->set_ep(50);
	this->set_attack_d(20);
	std::cout << "ScavTrap " << this->get_name() << ": Name constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->get_name() << ": Destructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &c)
{
	std::cout << this->get_name() << ": ScavTrap Assignment overload operator." << std::endl;
	if (this != &c)
	{
		this->set_name(c.get_name());
		this->set_hp(c.get_hp());
		this->set_ep(c.get_ep());
		this->set_attack_d(c.get_attack_d());
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->get_hp() && this->get_ep())
	{
		this->set_ep(this->get_ep() - 1);
		std::cout << "ScavTrap " << this->get_name() << " is attacking " << target << " ";
		std::cout << this->get_attack_d() << " attack damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->get_name() << " can't hurt anyone!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->get_name() << " is now in GATE KEEPER MODE!";
	std::cout << std::endl;
}

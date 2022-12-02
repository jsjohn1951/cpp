/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:12:25 by wismith           #+#    #+#             */
/*   Updated: 2022/12/01 18:25:50 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Name = "randomDude";
	this->set_hp(100);
	this->set_ep(50);
	this->set_attack_d(20);
	std::cout << "ScavTrap " << this->get_name() << ": constructor" << std::endl;
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
	if (this != &c)
		*this = c;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->get_hp() && this->get_ep())
	{
		this->set_ep(this->get_ep() - 1);
		std::cout << "ScavTrap " << this->get_name() << " is attacking " << target << "'s eyes with ";
		std::cout << this->get_attack_d() << " spoons!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->get_name() << " can't hurt anyone!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->get_name() << " is now in GATE KEEPER MODE! ";
	std::cout << "Effectively guarding our water closets for centuries" << std::endl;
}

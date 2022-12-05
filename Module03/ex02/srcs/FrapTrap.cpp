/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:11:09 by wismith           #+#    #+#             */
/*   Updated: 2022/12/02 20:25:42 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FrapTrap.hpp"

FrapTrap::FrapTrap()
{
	this->set_name("randomDude");
	this->set_hp(100);
	this->set_ep(100);
	this->set_attack_d(30);
	std::cout << "FrapTrap " << this->get_name() << ": Default constructor" << std::endl;
}

FrapTrap::FrapTrap(std::string name)
{
	this->set_name(name);
	this->set_hp(100);
	this->set_ep(100);
	this->set_attack_d(30);
	std::cout << "FrapTrap " << this->get_name() << ": Name constructor" << std::endl;
}

FrapTrap::FrapTrap(FrapTrap &frap) : ClapTrap()
{
	this->set_name(frap.get_name());
	this->set_hp(frap.get_hp());
	this->set_ep(frap.get_ep());
	this->set_attack_d(frap.get_attack_d());
	std::cout << "FrapTrap " << this->get_name() << ": Copy constructor" << std::endl;
}

FrapTrap::~FrapTrap()
{
	std::cout << "FrapTrap " << this->get_name() << ": Destructor" << std::endl;
}

FrapTrap	&FrapTrap::operator=(FrapTrap &frap)
{
	std::cout << this->get_name() << ": FrapTrap Assignment overload operator." << std::endl;
	if (this != &frap)
	{
		this->set_name(frap.get_name());
		this->set_hp(frap.get_hp());
		this->set_ep(frap.get_ep());
		this->set_attack_d(frap.get_attack_d());
	}
	return (*this);
}

void	FrapTrap::highFiveGuys(void)
{
	std::cout << "FrapTrap " << this->get_name() << ": high five guys! We destroyed the troll!" << std::endl;
}

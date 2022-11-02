/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:33:25 by wismith           #+#    #+#             */
/*   Updated: 2022/10/30 21:42:26 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string n): name(n), weapon(NULL)
{
	std::cout << "\x1B[32m";
	std::cout << n << " born" << std::endl;
	std:: cout << "\x1B[0m";
}

HumanB::~HumanB()
{
	std::cout << "\x1B[31m";
	std::cout << this->name << " has died" << std::endl;
	std:: cout << "\x1B[0m";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their "
		<< (this->weapon ? this->weapon->getType() : "scared look on face") << std::endl;
}
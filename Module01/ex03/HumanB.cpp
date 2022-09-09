/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:12:36 by wismith           #+#    #+#             */
/*   Updated: 2022/09/09 15:39:12 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	name = n;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:18:04 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 12:35:24 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): name(name), weapon(type)
{
	std::cout << "\x1B[32m";
	std::cout << name << " born" << std::endl;
	std:: cout << "\x1B[0m";
}

HumanA::~HumanA()
{
	std::cout << "\x1B[31m";
	std::cout << this->name << " has died" << std::endl;
	std:: cout << "\x1B[0m";
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

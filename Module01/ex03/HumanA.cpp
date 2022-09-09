/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:44:25 by wismith           #+#    #+#             */
/*   Updated: 2022/09/09 15:37:38 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w)
{
	name = n;
	weapon = &w;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
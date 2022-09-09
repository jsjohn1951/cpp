/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:25:48 by wismith           #+#    #+#             */
/*   Updated: 2022/08/22 21:48:17 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::one_bite(std::string n)
{
	name = n;
}

Zombie::~Zombie(void)
{
	std::cout << name << " got killed by a raider" << std::endl;
}

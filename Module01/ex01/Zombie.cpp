/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:58:56 by wismith           #+#    #+#             */
/*   Updated: 2022/08/28 23:24:05 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "\t[" << tag << "] ";
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::one_bite(std::string n, int t)
{
	tag = t;
	name = n;
}

Zombie::~Zombie(void)
{
	std::cout << "\t[" << tag << "] ";
	std::cout << name << ": Got killed by a raider" << std::endl;
}

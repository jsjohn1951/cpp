/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:58:16 by wismith           #+#    #+#             */
/*   Updated: 2022/10/30 18:53:49 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\x1B[32m";
	std::cout << "Constructing a new Zombie: " << "time to run!" << std::endl;
	std::cout << "\x1B[0m";
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\x1B[31m";
	std::cout << "Destructing Zombie: " << this->name << ": Got killed by a raider!" << std::endl;
	std::cout << "\x1B[0m";
}

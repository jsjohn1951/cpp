/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:58:16 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 13:52:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\x1B[32m";
	std::cout << "Constructing a new Zombie: " << "time to run!" << std::endl;
	std::cout << "\x1B[0m";
}

void	Zombie::setName(std::string name, int t)
{
	this->name = name;
	this->tag = t;
}

void	Zombie::announce()
{
	std::cout << "[" << this->tag << "] ";
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "[" << this->tag << "] ";
	std::cout << "\x1B[31m";
	std::cout << "Destructing Zombie: " << this->name << ": Got killed by a raider!" << std::endl;
	std::cout << "\x1B[0m";
}

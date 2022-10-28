/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:16:37 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 12:37:42 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "\x1B[32m";
	std::cout << "Constructing a Zombie: " << name << ": better run!" << std::endl;
	std::cout << "\x1B[0m";
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "\x1B[31m";
	std::cout << "Destructing Zombie: " << this->name << ": you can stop running now!" << std::endl;
	std::cout << "\x1B[0m";
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

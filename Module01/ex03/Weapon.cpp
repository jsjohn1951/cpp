/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:53:30 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 12:33:22 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
	std::cout << "Constructing " << this->type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructing " << this->type << std::endl;
}

const std::string	&Weapon::getType()
{
	const std::string	&ref = this->type;
	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

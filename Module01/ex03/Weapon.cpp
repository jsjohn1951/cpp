/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:36:20 by wismith           #+#    #+#             */
/*   Updated: 2022/09/09 15:31:03 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w)
{
	type = w;
}

const std::string	&Weapon::getType()
{
	const std::string &ref = type;
	return (ref);
}

void	Weapon::setType(std::string t)
{
	type = t;
}

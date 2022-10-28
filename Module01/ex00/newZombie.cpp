/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:23:19 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 12:27:45 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*nonHuman = new Zombie(name);
	return (nonHuman);
}

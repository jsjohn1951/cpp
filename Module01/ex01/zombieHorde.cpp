/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:44:19 by wismith           #+#    #+#             */
/*   Updated: 2022/08/28 23:15:59 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*objs;

	objs = new Zombie[N];
	for (int i = 0; i < N; i++)
		objs[i].one_bite(name, i);
	return (objs);
}

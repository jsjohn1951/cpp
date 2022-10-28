/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:04:20 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 13:50:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*aHorde;

	aHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		aHorde[i].setName(name, i + 1);
	return (aHorde);
}

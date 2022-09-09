/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:34:49 by wismith           #+#    #+#             */
/*   Updated: 2022/08/22 21:50:34 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*bit;

	bit = newZombie("bob");
	bit->announce();
	delete bit;
	randomChump("Dale");
	return (0);
}

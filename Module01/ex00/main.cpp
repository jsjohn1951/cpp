/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:02:12 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 12:33:10 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main(void)
{
	Zombie	*aZombie;

	aZombie = newZombie("Was Bob");
	delete (aZombie);
	randomChump("Was Bill");
	return (0);
}

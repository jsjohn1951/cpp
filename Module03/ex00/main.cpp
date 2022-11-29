/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:15 by wismith           #+#    #+#             */
/*   Updated: 2022/11/29 16:41:51 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

int	main(void)
{
	std::cout << std::endl;
	{
		ClapTrap frank("Frank");

		frank.attack("Bob");
		frank.takeDamage(5);
		frank.beRepaired(5);
	}
	std::cout << std::endl;
	{
		ClapTrap bob("Bob");

		bob.attack("Frank");
		bob.takeDamage(4);
		bob.beRepaired(6);
	}
	std::cout << std::endl;
	{
		ClapTrap bob;

		bob.attack("Bob");
		bob.takeDamage(9);
		bob.beRepaired(3);
	}
	std::cout << std::endl;
	return (0);
}

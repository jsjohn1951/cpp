/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:15 by wismith           #+#    #+#             */
/*   Updated: 2022/12/01 18:24:16 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

void	default_test()
{
	std::cout << std::endl << "Default Test" << std::endl;
	std::cout << std::endl;
	{
		ScavTrap	Thalia("Thalia");
		ScavTrap	clone = Thalia;

		clone.set_name("clone");
		Thalia.retrieveAttr();
		std::cout << std::endl;
		Thalia.attack("bob");
		Thalia.takeDamage(12);
		Thalia.beRepaired(2);
		Thalia.guardGate();
		Thalia.retrieveAttr();
		std::cout << std::endl;
	}
}

int	main(void)
{
	default_test();
	std::cout << std::endl;
	return (0);
}

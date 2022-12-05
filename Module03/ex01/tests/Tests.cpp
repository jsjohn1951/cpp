/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:13:08 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 17:29:52 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tests.hpp"

//! ClapTrap Tests

void	ClapTrap_default_test(void)
{
	std::cout << "\x1B[31m" << std::endl;
	{
		ClapTrap frank("Frank");

		frank.attack("Bob");
		frank.takeDamage(5);
		frank.beRepaired(5);
		std::cout << std::endl;
		frank.retrieveAttr();
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

void	ClapTrap_test_one(void)
{
	std::cout << "\x1B[32m" << std::endl;
	{
		ClapTrap bob("Bob");

		bob.attack("Frank");
		bob.takeDamage(4);
		bob.beRepaired(6);
		std::cout << std::endl;
		bob.retrieveAttr();
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

void	ClapTrap_test_two(void)
{
	std::cout << "\x1B[31m" << std::endl;
	{
		ClapTrap bob;

		bob.attack("Bob");
		bob.takeDamage(9);
		bob.beRepaired(3);
		std::cout << std::endl;
		bob.retrieveAttr();
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

void	ClapTrap_test_three(void)
{
	std::cout << "\x1B[32m" << std::endl;
	{
		ClapTrap bob("John");
		bob.set_attack_d(2);
		bob.set_ep(2);

		std::cout << std::endl;
		bob.retrieveAttr();
		std::cout << std::endl;

		bob.attack("Frank");
		bob.beRepaired(1);
		bob.beRepaired(1);
		bob.attack("Monkey");

		std::cout << std::endl;
		bob.retrieveAttr();
		std::cout << std::endl;

		for (int i = 0; i < 4; i++)
			bob.takeDamage(4);

		for (int i = 0; i < 2; i++)
			bob.beRepaired(1);
		bob.attack("Frank");

		std::cout << std::endl;
		bob.retrieveAttr();
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

//! ScavTrap tests

void	ScavTrap_default_test(void)
{
	std::cout << std::endl << "ScavTrap Default Test" << std::endl;
	std::cout << "\x1B[31m" << std::endl;
	{
		ScavTrap	Amber;

		Amber.set_name("Amber");

		std::cout << std::endl;
		Amber.retrieveAttr();
		std::cout << std::endl;

		Amber.attack("Thalia");
		Amber.takeDamage(5);
		Amber.beRepaired(4);
		Amber.guardGate();

		std::cout << std::endl;
		Amber.retrieveAttr();
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}

void	ScavTrap_cloning_test(void)
{
	std::cout << std::endl << "Cloning_ScavTrap Test" << std::endl;
	std::cout << "\x1B[32m" << std::endl;
	{
		ScavTrap	Thalia("Thalia");
		ScavTrap	clone;
		clone = Thalia;

		clone.set_name("clone");

		std::cout << std::endl;
		Thalia.retrieveAttr();
		std::cout << std::endl;

		Thalia.attack("bob");
		Thalia.takeDamage(12);
		Thalia.beRepaired(2);
		Thalia.guardGate();

		std::cout << std::endl;
		Thalia.retrieveAttr();
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m";
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:52:08 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 14:00:41 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void	test1(void)
{
	Zombie	*aHorde;
	int		n;

	n = 4;
	aHorde = zombieHorde(n, "was Bob");
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		aHorde[i].announce();
	std::cout << std::endl;
	delete [] aHorde;
}

void	test2(void)
{
	Zombie	*aHorde;
	int		n;

	n = 3;
	aHorde = zombieHorde(n, "was Billy");
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		aHorde[i].announce();
	std::cout << std::endl;
	delete [] aHorde;
}

int	main(void)
{
	std::cout << std::endl << "test 1:" << std::endl << std::endl;
	test1();
	std::cout << std::endl << "test 2:" << std::endl << std::endl;
	test2();
	std::cout << std::endl;
	return (0);
}

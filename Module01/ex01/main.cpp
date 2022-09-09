/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:02:15 by wismith           #+#    #+#             */
/*   Updated: 2022/08/28 23:30:36 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			N;
	std::string	name;
	Zombie		*objs;

	std::cout << "Zombie name: ";
	std::getline(std::cin >> std::ws, name);
	std::cout << "Num of Zombies: ";
	std::cin >> N;
	objs = zombieHorde(N, name);
	std::cout << "\x1B[32m" << std::endl;
	for (int i = 0; i < N; i++)
		(objs + i)->announce();
	std::cout << "\x1B[31m" << std::endl;
	delete [] objs;
	std::cout << "\x1B[0m" << std::endl;
	return (0);
}

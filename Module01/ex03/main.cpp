/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:39:22 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 12:44:10 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
# include "./HumanA.hpp"
# include "./HumanB.hpp"

int main()
{
	std::cout << std::endl << "HumanA: " << std::endl << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Muttley", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl << "HumanB: " << std::endl << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Dastardly");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << std::endl << "HumanB: " << std::endl << std::endl;
	{
		HumanB jim("Jim");
		jim.attack();
	}
	std::cout << std::endl;
	return 0;
}


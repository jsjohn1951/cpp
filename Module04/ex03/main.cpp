/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:40:19 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 22:15:53 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "includes/IMateriaSource.hpp"
// #include "includes/AMateria.hpp"
#include "includes/Cure.hpp"
#include "includes/Ice.hpp"
#include "includes/Character.hpp"

void	test_default()
{
	{
	// IMateriaSource* src = new MateriaSource();

	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");
	// AMateria* tmp;

	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);

	// delete bob;
	// delete me;
	// delete src;
	}
}

int main()
{
	std::cout << std::endl;
	{
		ICharacter	*bob = new Character("Bob");
		ICharacter	*john = new Character("John");

		for (int i = 0; i < 4; i++)
			if (i % 2)
				bob->equip(new Ice);
			else
				bob->equip(new Cure);
		
		bob->unequip(0);
		bob->unequip(3);
		bob->equip(new Cure);
		bob->equip(new Ice);
		for (int i = 0; i < 4; i++)
			bob->use(i, *john);
		bob->equip(new Cure);

		delete bob;
		delete john;
	}
	std::cout << std::endl;
	return 0;
}
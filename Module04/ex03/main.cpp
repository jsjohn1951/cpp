/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:40:19 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 22:58:24 by wismith          ###   ########.fr       */
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

void	testCharacter_Materia(void)
{
	std::cout << std::endl;
	{
	//** Allocate two Characters: Bob & John
		ICharacter	*bob = new Character("Bob");
		ICharacter	*john = new Character("John");

	//** Equip Bob with Materia Ice and Cure
		for (int i = 0; i < 4; i++)
		{
			if (i % 2)
				bob->equip(new Ice);
			else
				bob->equip(new Cure);
		}
	//** Unequip index 0 & 3
		bob->unequip(0);
		bob->unequip(3);
	
	//** Reequip 0 & 3 with Cure and Ice Materia in that order
		bob->equip(new Cure);
		bob->equip(new Ice);
	
	//** Check that the correct Materia are used on John
		for (int i = 0; i < 4; i++)
			bob->use(i, *john);
	
	//** Try to equip with no slots available
		bob->equip(new Cure);
	
	//** unequip one slot 
		bob->unequip(2);
	
	//** Check slot is not weaponized
		bob->use(2, *john);
	
	//** Reequip slot with Ice Materia
		bob->equip(new Ice);
	//** Now attack John with the Ice!
		bob->use(2, *john);

	//** Delete Bob and John
		delete bob;
		delete john;
	}
	std::cout << std::endl;
}

int main()
{
	testCharacter_Materia();
	return 0;
}
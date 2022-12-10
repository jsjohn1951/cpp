/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:14:25 by wismith           #+#    #+#             */
/*   Updated: 2022/12/10 15:37:43 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void	test_default()
{
	std::cout << "Default test: \x1B[31m" << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Cure());
		src->learnMateria(new Ice());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "\x1B[0m" << std::endl;
}

void	non_default_tests(void)
{
	std::cout << "Non Default test one: \x1B[34m" << std::endl << std::endl;
	{
		IMateriaSource	*src = new MateriaSource;
		Character bob("Bob");
		Character enemy("Enemy");
		ICharacter		*enemy2 = new Character;
		
		//** learn new Materia
		for (int i = 0; i < 5; i++)
		{
			if ((i % 2))
				src->learnMateria(new Cure);
			else
				src->learnMateria(new Ice);
		}

		//** equip Materia to bob
		for (int i = 0; i < 5; i++)
		{
			if ((i % 2))
				bob.equip(src->createMateria("cure"));
			else
				bob.equip(src->createMateria("ice"));
		}

		//** test copy assignment operator overload
		enemy = bob;
		
		//** use weapon in slot 2 on itself
		enemy.use(2, enemy);

		enemy.use(3, *enemy2);

		//** weapon outside of available slots
		enemy.use(5, *enemy2);
	
		//** delete objects on the heap
		delete enemy2;
		delete src;
	}
	std::cout << "\x1B[0m" << std::endl;
}

void	testCharacter_Materia(void)
{
	std::cout << "Non Default test two: \x1B[32m" << std::endl << std::endl;
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
	std::cout << "\x1B[0m" << std::endl;
}

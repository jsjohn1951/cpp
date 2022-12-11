/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:14:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 22:03:04 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

//! ----------------- ex00 tests! ------------------- !//

/*
 *	@ default_test brief
 * 		test provided by the 42 cpp Module04 pdf
 *
 * 		Tests basics of functions that were implemented for Animal
 * 			which is inherited by both Cat and Dog objects
 */


void	default_test()
{
	std::cout << "Default Test: "  << std::endl << std::endl;
	std::cout << "\tTest provided by pdf \x1B[32m" << std::endl << std::endl;
	{
		//! Constructing
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		//! Divider
		std::cout << std::endl;

		//! display animal type for j and i
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		//! Divider
		std::cout << std::endl;

		//! test make sound for each animal
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "\x1B[0m" << std::endl;
}

/*
 *	@ test_two brief
 * 		test created by wismith
 *
 * 		Tests Copy constructors to ensure that 'Type' attribute is
 * 			being copied when copy constructors are being called
 * 		Note:
 * 			Probably unnecessary for Dog and Cat, but definitely necessary
 * 				for animal
 */

void	test_two()
{
	std::cout << "Test two: "  << std::endl << std::endl;
	std::cout << "\tTest copy constructors\x1B[32m" << std::endl << std::endl;
	{
		//! Constructing
		Animal	*animal = new Dog;
		Animal	animal2(*animal);
		Dog		dog;
		Dog		dog2(dog);
		Cat		cat;
		Cat		cat2(cat);

		//! Divider
		std::cout << std::endl;

		//! Display animal types
		std::cout << "Animal1: ";
		std::cout << "\t" << animal->getType() << std::endl;
		std::cout << "Animal2: ";
		std::cout << "\t" << animal2.getType() << std::endl;

		//** seperator animals from Cats and Dogs
		std::cout << std::endl;

		std::cout << "Dog2: ";
		std::cout << "\t" << dog2.getType() << std::endl;
		std::cout << "Cat2: ";
		std::cout << "\t" << cat2.getType() << std::endl;

		//! Divider
		std::cout << std::endl;

		//! test make sound for each animal
		std::cout << "Animal1: ";
		animal->makeSound();
		std::cout << "Animal2: ";
		animal2.makeSound();
		std::cout << "Dog2: ";
		dog2.makeSound();
		std::cout << "Cat2: ";
		cat2.makeSound();

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
		delete animal;
	}
	std::cout << "\x1B[0m" << std::endl;
}

/*
 *	@ test_three brief
 * 		test created by wismith
 *
 * 		Tests assignment operator overload for animal
 */

void	test_three()
{
	std::cout << "Test three: "  << std::endl << std::endl;
	std::cout << "\tTest Copy assignment operator overload for animal\x1B[32m" << std::endl << std::endl;
	{
		//! Constructing
		Animal	*dog = new Dog;
		Animal	*cat = new Cat;

		//! Divider
		std::cout << std::endl;

		//! display animal type for dog and cat
		std::cout << "Dog:\t" << dog->getType() << std::endl;
		std::cout << "Cat:\t" << cat->getType() << std::endl;

		//! Call Assignment operator overload
		*dog = *cat;

		//! Divider
		std::cout << std::endl;

		//! display animal type for dog and cat
		std::cout << "dog:\t" << dog->getType() << std::endl;
		std::cout << "cat:\t" << cat->getType() << std::endl;

		//! Make Sound!
		std::cout << "Dog:\t";
		dog->makeSound();
		std::cout << "Cat:\t";
		cat->makeSound();

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
		delete dog;
		delete cat;
	}
	std::cout << "\x1B[0m" << std::endl;
}

/*
 *	@ test_four_wrongAnminal brief
 * 		test created by wismith
 *
 * 		Tests basics of functions that were implemented for WrongAnimal
 * 			which is inherited by WrongCat Object
 */

void	test_four_wrongAnimal()
{
	std::cout << "Test Four: "  << std::endl << std::endl;
	std::cout << "\tTest WrongAnimal & WrongCat \x1B[32m" << std::endl << std::endl;
	{
		//! Constructing
		WrongAnimal	idk;
		WrongAnimal	*cat = new WrongCat;

		//! Divider
		std::cout << std::endl;

		//! display animal type for j and i
		std::cout << "idk:\t" << idk.getType() << std::endl;
		std::cout << "cat:\t" << cat->getType() << std::endl;

		//! Divider
		std::cout << std::endl;

		//! test make sound for each animal
		std::cout << "idk:\t";
		idk.makeSound();
		std::cout << "cat:\t";
		cat->makeSound();

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
		delete cat;
	}
	std::cout << "\x1B[0m" << std::endl;
}

//! ----------------- End ex00 tests! ------------------- !//

//! ----------------- ex01 tests! ------------------- !//

/*
 *	@ default_brain_test brief
 * 		test provided by the 42 cpp Module04 pdf
 *
 * 		Tests basics Construction of brain object when
 * 			constructing Dog and Cat
 */

void	default_brain_test()
{
	std::cout << "Default_brain Test: "  << std::endl << std::endl;
	std::cout << "\tTest provided by pdf \x1B[32m" << std::endl << std::endl;
	{
		//! Constructing
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
		delete j;//should not create a leak
		delete i;
	}
	std::cout << "\x1B[0m" << std::endl;
}

/*
 *	@ test_one_brain brief
 * 		test created by wismith
 *
 *		Tests the creation of multiple Dogs and Cats
 *			the creation and deletion are called in while loops
 */

void	test_one_brain()
{
	std::cout << "Test_brain two: "  << std::endl << std::endl;
	std::cout << "\tTest multi-construction/multi-destruction\x1B[32m" << std::endl << std::endl;
	{
		int num = 4;

		const Animal	*animals[num];
		//! Constructing
		for (int i = 0; i < num; i++)
		{
			std::cout << "animal " << i + 1 << ": ";
			(!(i % 2) ? animals[i] = new Dog : animals[i] = new Cat);
		}

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
		for (int i = 0; i < num; i++)
		{
			std::cout << "animal " << i + 1 << ": ";
			delete animals[i];
		}
	}
	std::cout << "\x1B[0m" << std::endl;
}

/*
 *	@ test_two_brain brief
 * 		test created by wismith
 *
 *		Tests the the deep copy aspect of the objects by calling
 *			copy assignment operator overload and printing out the 0th
 *				index inside the brain string var
 */

void	test_two_brain()
{
	std::cout << "Test_brain two: "  << std::endl << std::endl;
	std::cout << "\tDeep Copy Test\x1B[32m" << std::endl << std::endl;
	{
		//! Constructing
		Cat	cat1;
		Cat cat2;

		//! Divider
		std::cout << std::endl;

		//! Set Idea
		cat1.getBrain()->setIdea(0, "Hello World");
		cat2.getBrain()->setIdea(0, "Cat2 wants to rule the world!");

		//! print ideas
		std::cout << "cat1: " << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << "cat2: " << cat2.getBrain()->getIdea(0) << std::endl;

		//! Divider
		std::cout << std::endl;

		//! Call copy assignment overload
		cat1 = cat2;

		//! Divider
		std::cout << std::endl;

		//! print ideas
		std::cout << "cat1: " << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << "cat2: " << cat2.getBrain()->getIdea(0) << std::endl;

		//! Divider
		std::cout << std::endl;

		//! Delete heap allocated objects (Destruct)
	}
	std::cout << "\x1B[0m" << std::endl;
}

//! ----------------- End ex01 tests! ------------------- !//

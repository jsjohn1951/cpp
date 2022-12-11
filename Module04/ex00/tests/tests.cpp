/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:14:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 15:13:22 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

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
		std::cout << "Dog: " << dog->getType() << std::endl;
		std::cout << "Cat: " << cat->getType() << std::endl;

		//! Call Assignment operator overload
		*dog = *cat;

		//! Divider
		std::cout << std::endl;

		//! display animal type for dog and cat
		std::cout << "dog: " << dog->getType() << std::endl;
		std::cout << "cat: " << cat->getType() << std::endl;

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

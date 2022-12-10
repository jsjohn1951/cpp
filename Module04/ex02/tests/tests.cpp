/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:14:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/10 16:30:30 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void	Animal_t()
{

	std::cout << std::endl << "Default Test One : \x1B[35m" << std::endl;
	{
		std::cout << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!

		std::cout << std::endl;
		delete	i;
		delete	j;
		std::cout << "\x1B[0m" << std::endl;
	}

	// std::cout << std::endl << "Default Test Two : \x1B[31m" << std::endl;
	// {
	// 	std::cout << std::endl;
	// 	Dog		dog;
	// 	Animal	someAnimal;

	// 	std::cout << std::endl;
	// 	someAnimal = dog;
	// 	someAnimal.makeSound();
	// 	dog.makeSound();
	// 	std::cout << std::endl;
	// }
	std::cout << "\x1B[0m" << std::endl;
}

void	Wrong_Animal_t()
{
	std::cout << std::endl << "Wrong Animal Test One : \x1B[34m" << std::endl;
	{
		std::cout << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		std::cout << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound(); //will output the dog sound!
		meta->makeSound(); //will output the random Animal sound!

		std::cout << std::endl;
		delete	i;
		delete	j;
		delete	meta;
		std::cout << "\x1B[0m" << std::endl;
	}
}

void	Brain_test()
{
	std::cout << std::endl;
	std::cout << "Animal Has Brain Test Default :" << std::endl << std::endl;
	std::cout << "\t Test required by subject \x1B[32m" << std::endl << std::endl;
	{
		int	num = 4;
		const Animal	*j[num];

		for (int i = 0; i < num; i++)
		{
			(i % 2 ? j[i] = new Dog : j[i] = new Cat);
			std::cout << std::endl;
		}
		std::cout << "---------------------------" << std::endl << std::endl;
		for (int i = 0; i < num; i++)
		{
			delete j[i];
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "\x1B[0mAnimal Has Brain Test One :" << std::endl << std::endl;
	std::cout << "\t Test given on the pdf \x1B[36m" << std::endl << std::endl;
	{
		const Animal* j = new Dog();
		std::cout << std::endl;
		const Animal* i = new Cat();
		std::cout << std::endl;

		std::cout << "---------------------------" << std::endl << std::endl;

		delete j;//should not create a leak
		std::cout << std::endl;
		delete i;
	}
	std::cout << std::endl << "\x1B[0mAnimal Has Brain Test Two :" << std::endl << std::endl;
	std::cout << "\t Testing the copy constructors and\n\tcopy assignment operator overload \x1B[31m" << std::endl
	<< std::endl;
	{
		Cat *cat = new Cat;
		Dog *dog = new Dog;

		std::cout << std::endl;
		Cat	cat2(*cat);
		Dog dog2(*dog);
		std::cout << std::endl;

		std::cout << std::endl;
		cat2 = *cat;
		dog2 = *dog;
		std::cout << std::endl;

		std::cout << std::endl;
		delete cat;
		delete dog;
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m" << std::endl;
}

void	deep_copy_test()
{
	std::cout << std::endl << "\x1B[0mBrain Deep Copy Test Two :" << std::endl << std::endl;
	std::cout << "\t Testing the deep copy capabilities \n\tof brain  \x1B[31m" << std::endl << std::endl;
	{
		Cat *cat = new Cat;
		Dog *dog = new Dog;

		cat->getBrain()->ideas[0] = "Hello Ideas";
		cat->getBrain()->ideas[1] = "I'm thinking of clawing some curtains"; 

		dog->getBrain()->ideas[0] = "Hello Ideas";
		dog->getBrain()->ideas[1] = "The Mail Man won't suspect my trap!";
		
		//! test copy constructor
		// std::cout << std::endl;
		// Cat	cat2(*cat);
		// Dog dog2(*dog);
		// std::cout << std::endl;
		//! End test copy constructor

		//! Test copy assignment operator overload
		std::cout << std::endl;
		Cat cat2 = *cat;
		Dog dog2 = *dog;
		std::cout << std::endl;
		//! End Test copy assignment operator overload

		std::cout << std::endl;
		std::cout << "Cat2 Ideas: " << std::endl;
		std::cout << cat2.getBrain()->ideas[1] << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "Dog2 Ideas: " << std::endl;
		std::cout << dog2.getBrain()->ideas[1] << std::endl;
		std::cout << std::endl;
		
		std::cout << std::endl;
		delete cat;
		delete dog;
		std::cout << std::endl;
	}
	std::cout << "\x1B[0m" << std::endl;
}

void	abstract_class_tests()
{
	{
		std::cout << std::endl;
		const	Animal	*something = new Dog;
		std::cout << std::endl;
		delete something;
		std::cout << std::endl;
	}
	// {
	// 	const Animal randomA;
	// }
}

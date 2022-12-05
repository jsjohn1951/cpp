/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:14:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/05 21:51:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void	Animal_t()
{

	std::cout << std::endl << "Default Test One : \x1B[35m" << std::endl;
	{
		std::cout << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

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

	std::cout << std::endl << "Default Test Two : \x1B[31m" << std::endl;
	{
		std::cout << std::endl;
		Dog		dog;
		Animal	someAnimal;

		std::cout << std::endl;
		someAnimal = dog;
		someAnimal.makeSound();
		dog.makeSound();
		std::cout << std::endl;
	}
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

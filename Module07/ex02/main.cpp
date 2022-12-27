/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:47:39 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 13:24:11 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Test.hpp"

#define MAX_VAL 750

void	test1()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[32mTest 1 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\x1B[32m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		unsigned int	size = 5;

		//! Construction
		Array <int> intArray(size);

		//! Assignment
		for(unsigned int i = 0; i < size; i++)
			intArray[i] = i * 2;

		//! Divider
		std::cout << std::endl;

		//! print Array elements
		std::cout << intArray << std::endl;

		//! Divider
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[32m<---------------------------------->\x1B[0m" << std::endl;
}

void	test2()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[31mTest 2 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\x1B[31m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		unsigned int	size = 5;

		//! Construction
		Array <float> intArray(size);

		//! Assignment
		for(unsigned int i = 0; i < size; i++)
			intArray[i] = i * 2.3;

		//! Divider
		std::cout << std::endl;

		//! print Array elements
		std::cout << intArray << std::endl;

		//! Divider
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[31m<---------------------------------->\x1B[0m" << std::endl;
}

void	test3()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[35mTest 3 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		//! Construction
		Array <int> intArray;

		//! Divider
		std::cout << std::endl;

		//! Value before
		std::cout << "value: " << intArray << std::endl;

		//! Divider
		std::cout << std::endl;

		std::cout << "setting: intArray len = 1" << std::endl;

		//! Copy assignment operator overload
		intArray = 1;
		intArray[0] = 3;

		//! Divider
		std::cout << std::endl;

		std::cout << "value: " << intArray << std::endl;

		//! Divider
		std::cout << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl;
}

void	test4()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[36mTest 4 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\x1B[36m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		//! Construction
		Array <Test> intArray(2);
		Test	john("John", 24);
		Test	bob("Bob", 54);

		//! Assignment
		intArray[0] = john;
		intArray[1] = bob;

		//! Divider
		std::cout << std::endl;

		//! print Array elements
		std::cout << intArray[0] << std::endl;
		std::cout << intArray[1] << std::endl;

		//! Divider
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[36m<---------------------------------->\x1B[0m" << std::endl;
}

void	test5()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[36mTest 4 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\x1B[36m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return ;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	std::cout << std::endl << "\x1B[36m<---------------------------------->\x1B[0m" << std::endl;
}

int	main(void)
{
	std::cout << std::endl;
	test1();
	std::cout << std::endl;
	test2();
	std::cout << std::endl;
	test3();
	std::cout << std::endl;
	test4();
	std::cout << std::endl;
	test5();
	std::cout << std::endl;
}

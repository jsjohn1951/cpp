/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:11:36 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 17:06:22 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	testOne()
{
	//! test 1
	std::cout << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[32mTest 1 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl;
	{
		//! init array
		int	arr[] = {1, 2, 3, 4, 5};

		//! Divider
		std::cout << std::endl << "\t";

		//! Call to template function
		std::cout << "result :\n\n";
		::iter(arr, 5, ::printIndex);

		//! Divider
		std::cout << std::endl;
		std::cout << std::endl;
	}
}

void	testTwo()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[31mTest 2 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl;
	{
		//! init array
		std::string	arr[] = {"Hello", "World"};

		//! Divider
		std::cout << std::endl << "\t";

		//! Call to template function
		std::cout << "result :\n\n";
		::iter(arr, 2, ::printIndex);

		//! Divider
		std::cout << std::endl;
		std::cout << std::endl;
	}
}

void	testThree()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[35mTest 3 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl;
	{
		//! init array
		float	arr[] = {0.5f, 23.4f, 42.0f};

		//! Divider
		std::cout << std::endl << "\t";

		//! Call to template function
		std::cout << "result :\n\n";
		::iter(arr, 3, ::printIndex);

		//! Divider
		std::cout << std::endl;
		std::cout << std::endl;
	}
}

void	testFour()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[36mTest 4 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	{
		//! init array
		Test	arr[2];
		arr[0].setName("John");
		arr[0].setAge(24);
		arr[1].setName("Bob");
		arr[1].setAge(54);

		//! Divider
		std::cout << std::endl << "\t";

		//! Call to template function
		std::cout << "result :\n\n";
		::iter(arr, 2, ::printIndex);

		//! Divider
		std::cout << std::endl;
	}
}

int	main(void)
{
	testOne();
	testTwo();
	testThree();
	testFour();
	std::cout << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:03:05 by wismith           #+#    #+#             */
/*   Updated: 2022/12/29 13:57:05 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	testOne()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[32mTest 1 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTest finding random\n\tnumber with ::easyfind()" << std::endl;
	std::cout << "\x1B[32m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	{
		int	size = 50;
		int	arr[size];
		for (int i = 0; i < size; i++)
			arr[i] = rand();
		std::vector<int> vect(arr, arr + (sizeof(arr) / sizeof(int)));
		try
		{
			::easyfind(vect, arr[size / 2]);
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "\x1B[32m<---------------------------------->\x1B[0m" << std::endl;
}

void	testTwo()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[31mTest 2 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTest exception :\n\tnumber not in Array" << std::endl;
	std::cout << "\x1B[31m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	{
		int	arr[] = {2, 5, 4, 12, 9, 6};
		int	val = 13;
		std::vector<int> vect(arr, arr + (sizeof(arr) / sizeof(int)));
		try
		{
			::easyfind(vect, val);
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl << "\x1B[31m<---------------------------------->\x1B[0m" << std::endl;
	}
}

void	testThree()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[35mTest 3 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTest deque<> Container" << std::endl;
	std::cout << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	{
		std::deque<int> arr;
		arr.push_back(9);
		arr.push_front(10);
		int	val = 9;
		try
		{
			::easyfind(arr, val);
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl;
	}
}

int	main(void)
{
	std::cout << std::endl;
	testOne();
	std::cout << std::endl;
	testTwo();
	std::cout << std::endl;
	testThree();
	std::cout << std::endl;
	return (0);
}
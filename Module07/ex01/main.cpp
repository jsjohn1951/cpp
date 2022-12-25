/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:11:36 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 22:31:21 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	//! test 1
	std::cout << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "| Test 1: |" << std::endl;
	std::cout << "-----------" << std::endl;
	{
		//! init array
		int	arr[] = {1, 2, 3, 4, 5};

		//! Divider
		std::cout << std::endl << "\t";

		//! Call to template function
		std::cout << "result :\t";
		::iter(arr, 5, ::printIndex);

		//! Divider
		std::cout << std::endl;
		std::cout << std::endl;
	}
	std::cout << "-----------" << std::endl;
	std::cout << "| Test 2: |" << std::endl;
	std::cout << "-----------" << std::endl;
	{
		//! init array
		std::string	arr[] = {"Hello", "World"};

		//! Divider
		std::cout << std::endl << "\t";

		//! Call to template function
		std::cout << "result :\t";
		::iter(arr, 2, ::printIndex);

		//! Divider
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
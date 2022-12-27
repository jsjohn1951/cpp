/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:10:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 18:10:16 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	testOne()
{
	std::cout << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[32mTest 1 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl << std::endl;
}

void	testTwo()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[31mTest 2 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	{
		Test a("John", 24);
		Test b("Bob", 54);

		std::cout << "a:\n" << a << "\nb: \n" << b << std::endl;
		std::cout << "Swapping a & b" << std::endl << std::endl;
		::swap( a, b );
		std::cout << "a:\n" << a << "\nb: \n" << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
}

int	main(void)
{
	testOne();
	testTwo();
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:53:00 by wismith           #+#    #+#             */
/*   Updated: 2022/11/27 20:37:38 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//! Resources:
/*
* https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
*/

void	test_default(void)
{
	std::cout << "\x1B[31mDefault Test\x1B[0m" << std::endl << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
}

void	test_one(void)
{
	std::cout << std::endl << "\x1B[31mTest Arithmetic Operators\x1B[0m" << std::endl << std::endl;
	{
		Fixed a(12.05f);
		Fixed b(5.05f);
		Fixed c(6);
		Fixed d(6);
		Fixed e(12);

		std::cout << a << " + " << b << " = " << a + b << std::endl;
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		std::cout << c << " * " << d << " = " << c * d << std::endl;
		std::cout << b << " * " << d << " = " << b * d << std::endl;
		std::cout << e << " / " << d << " = " << e / d << std::endl;
		std::cout << a << " / " << d << " = " << a / d << std::endl;
	}
}

void	test_two(void)
{
	std::cout << std::endl << "\x1B[31mTest 6 comparison operators\x1B[0m" << std::endl << std::endl;
	{
		Fixed	a(12);
		Fixed	b(12.5f);

		std::cout << a << " == " << b << " ?";
		(a == b ? std::cout << " true" << std::endl : std::cout << " false" << std::endl);
		std::cout << a << " != " << b << " ?";
		(a != b ? std::cout << " true" << std::endl : std::cout << " false" << std::endl);
		std::cout << a << " > " << b << " ?";
		(a > b ? std::cout << " true" << std::endl : std::cout << " false" << std::endl);
		std::cout << a << " < " << b << " ?";
		(a < b ? std::cout << " true" << std::endl : std::cout << " false" << std::endl);
		std::cout << a << " >= " << b << " ?";
		(a >= b ? std::cout << " true" << std::endl : std::cout << " false" << std::endl);
		std::cout << a << " <= " << b << " ?";
		(a <= b ? std::cout << " true" << std::endl : std::cout << " false" << std::endl);
	}
}

int main( void )
{
	std::cout << std::endl;
	test_default();
	test_one();
	test_two();
	std::cout << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:09:58 by wismith           #+#    #+#             */
/*   Updated: 2022/11/03 01:38:45 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

void	g_s(Fixed &a, Fixed &b, Fixed &c)
{
	(c > b ? std::cout << b.toFloat() << " < " << c.toFloat() << std::endl
	: std::cout << b.toFloat() << " >= " << c.toFloat() << std::endl);

	(c < a ? std::cout << a.toFloat() << " > " << c.toFloat() << std::endl
	: std::cout << a.toFloat() << " <= " << c.toFloat() << std::endl);
}

void	g_s_e(Fixed &a, Fixed &b, Fixed &c)
{
	(c <= b ? std::cout << b.toFloat() << " >= " << c.toFloat() << std::endl
	: std::cout << b.toFloat() << " < " << c.toFloat() << std::endl);

	(c >= a ? std::cout << a.toFloat() << " <= " << c.toFloat() << std::endl
	: std::cout << a.toFloat() << " > " << c.toFloat() << std::endl);
}

void	boolean_tests()
{
	float	bravo = 5.90f;
	Fixed a( 3.25f );
	Fixed b( 6.40f );
	Fixed c ( bravo );

	std::cout << std::endl;
	g_s(a, b, c);
	g_s_e(a, b, c);

	(c == a ? std::cout << a.toFloat() << " == " << c.toFloat() << std::endl
	: std::cout << a.toFloat() << " != " << c.toFloat() << std::endl);

	(c != a ? std::cout << a.toFloat() << " != " << c.toFloat() << std::endl
	: std::cout << a.toFloat() << " == " << c.toFloat() << std::endl);

	(a != a ? std::cout << a.toFloat() << " != " << a.toFloat() << std::endl
	: std::cout << a.toFloat() << " == " << a.toFloat() << std::endl);

	std::cout << std::endl;
}

void	multi_div()
{
	Fixed	a(16);
	Fixed	b(4);
	std::cout << "Test 4:" << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;
	std::cout << std::endl;
}

void	add_sub()
{
	Fixed	a(16);
	Fixed	b(4);

	std::cout << "Test 3:" << std::endl;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << std::endl;
}

void	min_max(const Fixed &a, const Fixed &b)
{
	Fixed test1(19);
	Fixed test2(14);

	std::cout << "Test 1:" << std::endl;
	std::cout << "max: " << Fixed::max(test1, test2) << "\tmin: ";
	std::cout << Fixed::min(test1, test2) << std::endl << std::endl;

	std::cout << "Test 2:" << std::endl;
	std::cout << "max: " << Fixed::max(a, b) << "\tmin: ";
	std::cout << Fixed::min(a, b) << std::endl << std::endl;
}

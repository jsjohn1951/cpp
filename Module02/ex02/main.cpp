/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:53:00 by wismith           #+#    #+#             */
/*   Updated: 2022/11/27 17:36:48 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

//! Resources:
/* 
* https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/ 
*/

int main( void )
{
	std::cout << std::endl;
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
	std::cout << std::endl << "\x1B[31mTest Arithmetic Operators\x1B[0m" << std::endl << std::endl;
	{
		Fixed a(12.05f);
		Fixed b(5.05f);

		std::cout << a << " + " << b << " = " << a + b << std::endl;
		std::cout << a << " - " << b << " = " << a - b << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
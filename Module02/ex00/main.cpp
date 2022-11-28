/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:53:00 by wismith           #+#    #+#             */
/*   Updated: 2022/11/28 15:05:24 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

void	test(void)
{
	std::cout << std::endl << "\x1B[32m/* test ? */" << std::endl;
	Fixed a;
	Fixed b( a );
	Fixed c;

	b.setRawBits(5);
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "/* end test */\x1B[0m" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	// std::cout << std::endl;
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	// test();
	return 0;
}
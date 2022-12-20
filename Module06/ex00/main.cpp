/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:39:01 by wismith           #+#    #+#             */
/*   Updated: 2022/12/20 21:07:07 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/ConvScalar.hpp"

int	main(int argc, char **argv)
{
	//! Divider
	std::cout << std::endl;
	{
		try
		{
			if (argc != 2)
				throw (InvalNumArg());

			//! Constructing
			ConvScalar scal(argv[1]);

			//! Divider
			std::cout << std::endl;

			//! Display contents of scal after conversion
			std::cout << scal << std::endl;

			//! Divider
			std::cout << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "ex00: could not execute due to: " << e.what() << std::endl;
		}
	}
	//! Divider
	std::cout << std::endl;
	return (0);
}

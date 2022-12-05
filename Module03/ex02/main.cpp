/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:15 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 17:32:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/Tests.hpp"
#include <iostream>

int	main(void)
{
	ScavTrap_cloning_test();
	FrapTrap_default_test();
	FrapTrap_test_one();
	FrapTrap_test_simple();
	std::cout << std::endl;
	return (0);
}

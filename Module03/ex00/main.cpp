/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:15 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 17:25:43 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/Tests.hpp"

int	main(void)
{
	ClapTrap_default_test();
	ClapTrap_test_one();
	ClapTrap_test_two();
	ClapTrap_test_three();
	std::cout << std::endl;
	return (0);
}

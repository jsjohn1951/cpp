/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:29:15 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 17:28:14 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/Tests.hpp"

int	main(void)
{
	ScavTrap_default_test();
	ScavTrap_cloning_test();
	std::cout << std::endl;
	return (0);
}

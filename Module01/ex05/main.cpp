/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:06:15 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 16:37:19 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(void)
{
	std::cout << std::endl;
	Harl	harl;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("bob");
	return (0);
}

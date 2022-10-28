/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:59:33 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 17:23:48 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "incorrect number of arguments" << std::endl;
		return (1);
	}
	std::cout << std::endl;
	Harl	harl;
	harl.complain(std::string(argv[1]));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:33:48 by wismith           #+#    #+#             */
/*   Updated: 2022/10/25 16:03:10 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./classes/PhoneBook.hpp"

int	main(void)
{
	std::string in;
	PhoneBook	p_obj;

	phonebook_header();
	std::cout << "-> ";
	std::cin >> in;
	std::cout << "\e[1;1H\e[2J";
	p_obj.set_num(0);
	while (in != "EXIT")
	{
		if (in == "ADD")
			p_obj.add_contact();
		else if (in == "SEARCH")
			p_obj.search();
		else
			std::cout << "Tis not a proper cmd" << std::endl;
		std::cout << "\n-> ";
		std::cin >> in;
		std::cout << "\e[1;1H\e[2J";
	}
	return (0);
}
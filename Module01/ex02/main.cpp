/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:05:58 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 15:33:23 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::endl;
	std::cout << "str: " << &str << std::endl;
	std::cout << "ptr: " << stringPTR << std::endl;
	std::cout << "ref: " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "str value: " << str << std::endl;
	std::cout << "ptr value: " << *stringPTR << std::endl;
	std::cout << "ref value: " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}

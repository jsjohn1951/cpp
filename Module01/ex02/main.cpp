/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:33:31 by wismith           #+#    #+#             */
/*   Updated: 2022/08/29 13:20:33 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str;
	std::string	*ptr;
	std::string &ref = str;
	
	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::cout << "str address: " << &str << std::endl;
	std::cout << "ptr address: " << ptr << std::endl;
	std::cout << "ref address: " << &ref << std::endl << std::endl;

	std::cout << "str value: " << str << std::endl;
	std::cout << "ptr value: " << *ptr << std::endl;
	std::cout << "ref value: " << ref << std::endl;
	return (0);
}

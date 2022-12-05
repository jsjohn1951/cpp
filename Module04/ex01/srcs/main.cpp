/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:23:40 by wismith           #+#    #+#             */
/*   Updated: 2022/12/05 22:25:27 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests/tests.hpp"

int main()
{
	// Animal_t();
	// Wrong_Animal_t();
	std::cout << std::endl;
	{
		Cat *cat = new Cat;
		Dog *dog = new Dog;

		std::cout << std::endl;
		Cat	cat2(*cat);
		Dog dog2(*dog);
		std::cout << std::endl;

		std::cout << std::endl;
		cat2 = *cat;
		dog2 = *dog;
		std::cout << std::endl;

		std::cout << std::endl;
		delete cat;
		delete dog;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}

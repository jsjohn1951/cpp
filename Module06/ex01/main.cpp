/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:50:06 by wismith           #+#    #+#             */
/*   Updated: 2022/12/24 13:42:39 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

intptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<intptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	std::cout << std::endl;
	{
		//! declare
		Data	data;
		Data	*d = &data;
		Data	*rtn;

		//! Init members
		data.Name = "John";
		data.age = 24;
		data.dataOfBirth = 28061998;

		//! test functions
		rtn = deserialize(serialize(d));
		std::cout << "Comparison result:\t\t";
		std::cout << (rtn == d ? "\x1B[32mPass!" : "\x1B[31mFailed!") << std::endl;
		std::cout << "\x1B[0m";

		//! Outcome:
		std::cout << "rtn * Name: " << rtn->Name << "\tdata Name: " << data.Name << std::endl;
		std::cout << "rtn * Age: " << rtn->age << "\t\tdata Age: " << data.age << std::endl;
		std::cout << "rtn * DoB: " << rtn->dataOfBirth << "\tdata DoB: " << data.dataOfBirth << std::endl;

		//! Divider
		std::cout << std::endl;
		//! Divider
		std::cout << std::endl;

		//! change age using rtn ptr, and compare
		std::cout << "Incrementing age by 10 using rtn ptr" << std::endl;
		rtn->age += 10;

		//! Divider
		std::cout << std::endl;
		//! Divider
		std::cout << std::endl;

		//! Compare age
		std::cout << "Comparison result:\t\t";
		std::cout << (rtn->age == data.age ? "\x1B[32mPass!" : "\x1B[31mFailed!") << std::endl;
		std::cout << "\x1B[0m";
		std::cout << "rtn * age: " << rtn->age << "\t\tdata age: " << data.age << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
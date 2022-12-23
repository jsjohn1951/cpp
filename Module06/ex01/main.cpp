/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 21:50:06 by wismith           #+#    #+#             */
/*   Updated: 2022/12/23 22:45:30 by wismith          ###   ########.fr       */
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
		std::cout << "Comparison result:";
		(rtn == d ? std::cout << " Pass!" << std::endl : std::cout << " Failed!" << std::endl);
		
		//! Divider
		std::cout << std::endl;

		//! Outcome:
		std::cout << "Name: " << rtn->Name << std::endl;
		std::cout << "Age: " << rtn->age << std::endl;
		std::cout << "DoB: " << rtn->dataOfBirth << std::endl;

		//! Divider
		std::cout << std::endl;

		//! change age using rtn ptr, and compare
		std::cout << "Incrementing age by 10 using rtn ptr" << std::endl;
		rtn->age += 10;
	
		//! Divider
		std::cout << std::endl;
	
		//! Compare age
		std::cout << "Comparison:" << std::endl;
		std::cout << "rtn * age: " << rtn->age << "\tdata age: " << data.age << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
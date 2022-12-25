/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:53:21 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 10:36:01 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Base	*generate(void)
{
	int	r = (rand() % 3);
	switch (r)
	{
		case 0 :
			std::cout << "\x1B[31m";
			return (new A);
		break ;
		case 1 :
			std::cout << "\x1B[32m";
			return (new B);
		break ;
	};
	std::cout << "\x1B[35m";
	return (new C);
}

void	identify(Base *p)
{
	try
	{
		if (!dynamic_cast<A*>(p))
			throw (Exception());
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception &e) {e.what();}
	try
	{
		if (!dynamic_cast<B*>(p))
			throw (Exception());
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception &e) {e.what();}
	try
	{
		if (!dynamic_cast<C*>(p))
			throw (Exception());
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception &e) {e.what();}
	std::cout << "Undefined" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception &e) {e.what();}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception &e) {e.what();}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception &e) {e.what();}
	std::cout << "Undefined" << std::endl;
}

int	main(void)
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::endl;
		Base *b = generate();
		std::cout << i << ") pointer:\t"; 
		identify(*b);
		std::cout << i << ") reference:\t"; 
		identify(b);
		delete b;
		std::cout << "\x1B[0m";
	}
	std::cout << std::endl;
	return (0);
}

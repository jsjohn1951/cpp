/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:53:21 by wismith           #+#    #+#             */
/*   Updated: 2022/12/24 17:58:53 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Base	*generate(void)
// {
// 	int	r = rand();
// 	switch (r)
// 	{
// 		case 0 :
// 			return (new A);
// 		break ;
// 		case 1 :
// 			return (new B);
// 		break ;
// 	};
// 	return (new C);
// }

intptr_t	serialize(Base* ptr)
{
	return (reinterpret_cast<intptr_t>(ptr));
}

Base* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Base*>(raw));
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
	// Base	*b = generate();
	Base *b = new B;
	identify(b);
	identify(*b);
	delete b;
	return (0);
}

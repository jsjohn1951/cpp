/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:38:42 by wismith           #+#    #+#             */
/*   Updated: 2022/12/30 15:12:35 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	MSTest()
{
	{
		MutantStack<int> mstack;
		std::list<int> mstack2;

		std::cout << std::endl;
		mstack.push(5);
		mstack2.push_back(5);
		mstack.push(17);
		mstack2.push_back(17);
		mstack.pop();
		mstack2.pop_back();

		std::cout << "\tCase : " << (mstack.top() == mstack2.back() ? "\x1B[32mPass\x1B[0m" : "\x1B[31mFail\x1B[0m" ) << "\n\tMutant Stack top() = " << mstack.top() << "\t" << "list back() = " << mstack2.back() << std::endl;
		std::cout << std::endl;
		std::cout << "\tCase : " << (mstack.size() == mstack2.size() ? "\x1B[32mPass\x1B[0m" : "\x1B[31mFail\x1B[0m" ) << "\n\tMutant Stack size() = " << mstack.size() << "\t" << "list size() = " << mstack2.size() << std::endl;
		std::cout << std::endl;
		mstack.push(3);
		mstack2.push_back(3);
		mstack.push(5);
		mstack2.push_back(5);
		mstack.push(737);
		mstack2.push_back(737);

		mstack.push(0);
		mstack2.push_back(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::list<int>::iterator it2 = mstack2.begin();
		++it2;
		--it2;
		while (it != ite)
		{
			std::cout << "\tCase : " << (*it == *it2 ? "\x1B[32mPass\x1B[0m" : "\x1B[31mFail\x1B[0m" ) << "\n\tMutant Stack val = " << *it << "\t" << "list val = " << *it2 << std::endl;
			std::cout << std::endl;
			++it;
			++it2;
		}
		std::cout << std::endl;
	}
}

void	testTwo()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(9);
		mstack.push(3);
		mstack.push(6);
		MutantStack<int> mstackb(mstack);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator it2 = mstackb.begin();
		for (;it != mstack.end(); it++)
			std::cout << *it << " : " << *(it2++) << std::endl;
 	}
}

int	main(void)
{
	std::cout << std::endl;
	MSTest();
	std::cout << std::endl;
	testTwo();
	std::cout << std::endl;
	return 0;
}

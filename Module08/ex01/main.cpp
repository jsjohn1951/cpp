/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:45:38 by wismith           #+#    #+#             */
/*   Updated: 2022/12/30 21:17:13 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	testOne()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[32mTest 1 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTests addNumber with random\n\tvalues" << std::endl;
	std::cout << "\x1B[32m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		Span	span(5);

		//! divider
		std::cout << std::endl;

		span.addNumber(rand() % 2);
		span.addNumber(210);
		span.addNumber(rand() % 2);
		span.addNumber(700);
		span.addNumber(1200);
		std::cout << "Longest Span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;

		//! divider
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[32m<---------------------------------->\x1B[0m" << std::endl;
}

void	testTwo()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[31mTest 2 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTests longestSpan() & ShortestSpan()" << std::endl;
	std::cout << "\x1B[31m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(5);

		//! divider
		std::cout << std::endl;

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

		//! divider
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[31m<---------------------------------->\x1B[0m" << std::endl;
}

void	testThree()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[35mTest 3 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTests OutOfBounds Exception" << std::endl;
	std::cout << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(2);

		//! divider
		std::cout << std::endl;

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(4);

		//! divider
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl;
}

void	testFour()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[36mTest 4 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTests NoSpanFound Exception" << std::endl;
	std::cout << "\x1B[36m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(1);

		//! divider
		std::cout << std::endl;

		sp.addNumber(6);

		std::cout << sp.longestSpan() << std::endl;

		//! divider
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[36m<---------------------------------->\x1B[0m" << std::endl;
}

void	testFive()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[33mTest 5 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTests Inject SPAN\n\tConstructor" << std::endl;
	std::cout << "\x1B[33m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		int	arr[] = {rand() % 10, 5, rand() % 10, 12, rand() % 10, 6};
		std::vector<int> vect(arr, arr + (sizeof(arr) / sizeof(int)));
		std::vector<int>::iterator start = vect.begin();
		std::vector<int>::iterator end = vect.end();
		Span sp(start, end);

		//! divider
		std::cout << std::endl;

		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

		//! divider
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[33m<---------------------------------->\x1B[0m" << std::endl;
}

void	testSix()
{
	std::cout << "-----------" << std::endl;
	std::cout << "| \x1B[35mTest 6 \x1B[0m |" << std::endl;
	std::cout << "-----------" << std::endl << std::endl;
	std::cout << "\tTests NoSpanFound Exception" << std::endl;
	std::cout << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl << std::endl;
	try
	{
		Span sp = Span(12);

		//! divider
		std::cout << std::endl;

		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		//! divider
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << "\x1B[35m<---------------------------------->\x1B[0m" << std::endl;
}

int	main(void)
{
	std::cout << std::endl;
	testOne();
	std::cout << std::endl;
	testTwo();
	std::cout << std::endl;
	testThree();
	std::cout << std::endl;
	testFour();
	std::cout << std::endl;
	testFive();
	std::cout << std::endl;
	testSix();
	std::cout << std::endl;
	return (0);
}

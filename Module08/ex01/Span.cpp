/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 17:06:40 by wismith           #+#    #+#             */
/*   Updated: 2022/12/30 21:13:08 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//! Constructors

Span::Span()
{
	std::cout << "Default SPAN Constructor" << std::endl;
}

Span::Span(unsigned int n): N(n), nPushd(0)
{
	std::cout << "Standard SPAN 'n' Constructor" << std::endl;
}

Span::Span(const Span &s): vec(s.vec), N(s.N), nPushd(0)
{
	std::cout << "Copy SPAN Constructor" << std::endl;
}

Span::Span(std::vector<int>::iterator start, std::vector<int>::iterator end): N(0), nPushd(0)
{
	std::cout << "Inject SPAN Constructor" << std::endl;
	for (std::vector<int>::iterator NStart = start; NStart != end; NStart++)
		this->N++;
	this->injectRange(start, end);
}

//! End Constructors

//! Destructor

Span::~Span()
{
	std::cout << "SPAN Destructor" << std::endl;
}

//! End Destructor

//! Operators

Span	&Span::operator=(const Span &s)
{
	std::cout << "Copy assignment operator overload" << std::endl;
	if (this != &s)
	{
		this->N = s.N;
		this->vec = s.vec;
	}
	return (*this);
}

//! End Operators

//! Member functions

void	Span::addNumber(int num)
{
	if (this->vec.size() >= this->N)
		throw (Span::OutOfBounds());
	this->vec.push_back(num);
	this->nPushd++;
}

void	Span::injectRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = start; it != end; it++)
		this->addNumber(*it);
}

int		Span::longestSpan()
{
	if (this->N <= 1 || this->nPushd <= 1)
		throw (NoSpanFound());
	std::vector<int>::iterator start = this->vec.begin();
	std::vector<int>::iterator end = this->vec.end() - 1;
	std::sort(this->vec.begin(), this->vec.end());
	return (*end - *start);
}

int		Span::shortestSpan()
{
	if (this->N <= 1 || this->nPushd <= 1)
		throw (NoSpanFound());
	int		sspan = this->longestSpan();
	std::vector<int>::iterator start = this->vec.begin();
	for (; start + 1 < this->vec.end(); start++)
		if ((*(start + 1) - *start ) < sspan)
			sspan = (*(start + 1) - *start );
	return (sspan);
}


//! End Member functions
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:52:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/30 21:09:56 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <cstdlib>

class Span
{
	private :
		//! Private exceptions
		class	OutOfBounds : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return ("Tried to Access OutOfBounds Index!");
				}
		};

		class	NoSpanFound : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return ("No Span Can be found!");
				}
		};

		//! Private Attributes
		std::vector <int> vec;
		unsigned int	N;
		unsigned int	nPushd;

		//! Private Default Constructor
		Span();

	public :
		//! constructors
		Span(unsigned int n);
		Span(const Span &s);
		Span(std::vector<int>::iterator start, std::vector<int>::iterator end);

		//! Destructors
		~Span();

		//! Operators
		Span	&operator=(const Span &s);

		//! Member functions
		void	addNumber(int num);
		void	injectRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
};

#endif
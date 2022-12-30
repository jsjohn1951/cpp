/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:52:18 by wismith           #+#    #+#             */
/*   Updated: 2022/12/30 17:12:02 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include<iterator>
# include <algorithm>

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

		//! Private Default Constructor
		Span();

	public :
		//! constructors
		Span(unsigned int n);
		Span(const Span &s);

		//! Destructors
		~Span();

		//! Operators
		Span	&operator=(const Span &s);

		//! Member functions
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
};

#endif
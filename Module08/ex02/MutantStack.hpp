/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:41:09 by wismith           #+#    #+#             */
/*   Updated: 2022/12/29 21:02:23 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>
# include <iterator>

template <typename T>
class MutantStack : public std::stack <T>
{
	public :
		//! Attributes
		typedef typename std::stack<T>::container_type::iterator iterator;

		//! Constructors
		MutantStack()
		{
			std::cout << "Default Constructor" << std::endl;
		}
		MutantStack(const MutantStack &m)
		{
			(void) m;
			std::cout << "Copy Constructor" << std::endl;
		}

		//! Destructor
		~MutantStack()
		{
			std::cout << "Destructor" << std::endl;
		}

		//! Operators
		MutantStack	&operator=(const MutantStack &m)
		{
			(void) m;
			return (*this);
		}

		//! Member functions
		std::stack<T>::container_type::iterator begin()
		{
			return (this->begin());
		}

		std::stack<T>::container_type::iterator end()
		{
			return (this->end());
		}
};

#endif
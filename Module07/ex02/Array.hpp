/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:48:09 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 23:27:58 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array
{
	private :
		//! Attributes
		unsigned int	Size;
		T				*var;

	public :
		//! Constructors
		Array() : var(new T), size(0)
		{
			std::cout << "Array Default Constructor" << std::endl;
		}
		Array(unsigned int n) : var(new T[n]), size(n)
		{
			std::cout << "Array 'n' Constructor" << std::endl;
		}
		Array(const Array &a) : var(new T[a.size()]), size(a.size())
		{
			std::cout << "Array Copy Constructor" << std::endl;
			if (this != &a)
				for (unsigned int i = 0; i < a.size(); i++)
					this->var[i] = a.var[i];
		}

		//! Destructor
		~Array()
		{
			delete [] this->var;
			std::cout << "Array Destructor" << std::endl;
		}

		//! Operators
		Array	&operator=(const Array &a)
		{
			if (this != &a)
			{
				delete [] this->var;
				this->var = new T[a.size()];
				this->Size = a.size();
				for (unsigned int i = 0; i < a.size(); i++)
					this->var[i] = a.var[i];
			}
		}

		Array	&operator[](unsigned int i)
		{
			
		}

		//! Member functions
		unsigned int	size()
		{
			return (this->Size);
		}
};
#endif
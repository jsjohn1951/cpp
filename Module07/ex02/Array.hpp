/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:48:09 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 13:21:08 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstdlib>

template <typename T>
class Array
{
	private :
		//! Private Attributes
		unsigned int	Size;
		T				*var;
		bool			access;

	public :
		//! Constructors
		Array() : Size(0), var(new T[0]), access(false)
		{
			std::cout << "Array Default Constructor" << std::endl;
		}
		
		Array(unsigned int n) : Size(n), var(new T[n]), access(false)
		{
			std::cout << "Array 'n' Constructor" << std::endl;
		}
		
		Array(const Array &a) :  Size(a.Size), var(new T[a.Size]), access(a.access)
		{
			std::cout << "Array Copy Constructor" << std::endl;
			if (this != &a)
			{
				for (unsigned int i = 0; this->access && i < a.Size; i++)
						this->var[i] = a.var[i];
			}
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
			std::cout << "Copy Assignment Operator Overload" << std::endl;
			if (this != &a)
			{
				delete [] this->var;
				this->var = new T[a.Size];
				this->Size = a.Size;
				this->access = a.access;
				for (unsigned int i = 0; i < a.Size; i++)
				{
					if (this->access)
						this->var[i] = a.var[i];
				}
			}
			return (*this);
		}

		T	&operator[](long int i)
		{
			// std::cout << "[] operator" << std::endl;
			if (i >= static_cast<int>(this->size()) || i < 0)
				throw (outOfBounds());
			this->access = true;
			return (var[i]);
		}

		class outOfBounds : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Index is Out of Bounds");
				}
		};

		//! Member functions
		unsigned int	size()
		{
			return (this->Size);
		}

		bool			getAccess()
		{
			return (this->access);
		}
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> &arr)
{
	for (int i = 0; arr.getAccess() && i < static_cast<int>(arr.size()); i++)
		o << arr[i] << " ";
	return (o);
}

#endif
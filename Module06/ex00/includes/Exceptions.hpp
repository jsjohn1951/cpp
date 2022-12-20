/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:43:07 by wismith           #+#    #+#             */
/*   Updated: 2022/12/20 20:06:58 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef EXCEPTIONS_HPP
# define EXCEPTIONS_HPP

# include <iostream>

class InvalNumArg : public std::exception
{
	public :
		const char *what() const throw()
		{
			return ("Invalid Number of Arguments");
		}
};

class EmptyStr : public std::exception
{
	public :
		const char *what() const throw()
		{
			return ("Argument is Empty");
		}
};

class InvalidInput : public std::exception
{
	public :
		const char *what() const throw()
		{
			return ("Input is Invalid");
		}
};

#endif
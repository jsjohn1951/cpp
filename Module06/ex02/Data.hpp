/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:56:16 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 17:24:42 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <cstdlib>

class Base
{
	public:
		virtual	~Base(){};
};

class A : public Base {};
class B : public Base{};
class C : public Base {};

class Exception : public std::exception
{
	public:
		const char *what() const throw();
};

#endif
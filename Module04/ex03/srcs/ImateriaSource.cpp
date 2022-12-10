/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:27:36 by wismith           #+#    #+#             */
/*   Updated: 2022/12/09 14:35:37 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"

//! Constructors

IMateriaSource::IMateriaSource()
{
	// std::cout << "IMateriaSource Interface Default Constructor" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &i)
{
	// std::cout << "IMateriaSource Interface Copy Constructor" << std::endl;
	if (this != &i)
		*this = i;
}

//! End Constructors

//! Destructor

IMateriaSource::~IMateriaSource()
{
	// std::cout << "IMateriaSource Interface Destructor" << std::endl;
}

//! End Destructor

//! Operators

IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &i)
{
	// std::cout << "IMateriaSource Interface Assignment operator overload" << std::endl;
	if (this != &i)
		*this = i;
	return (*this);
}

//! End Operators

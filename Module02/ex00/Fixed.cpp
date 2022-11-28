/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:25:37 by wismith           #+#    #+#             */
/*   Updated: 2022/11/28 15:05:13 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

Fixed::Fixed(void): val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->val = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}
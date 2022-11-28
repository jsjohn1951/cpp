/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:25:37 by wismith           #+#    #+#             */
/*   Updated: 2022/11/28 15:06:49 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Fixed.hpp"

//!Constructors

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

Fixed::Fixed(const int intNum): val(intNum << this->fracBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNum): val(roundf(floatNum * (1 << this->fracBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

//! End Constructors

//! Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//! End Destructor

//! Operators

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
		this->val = fix.getRawBits();
	return (*this);
}

//! End Operators

//! member functions

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->val = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->val) / (float)(1 << this->fracBits));
}

int	Fixed::toInt(void) const
{
	return (this->val >> this->fracBits);
}

//! End member functions

//! External functions & operators

std::ostream &operator<<(std::ostream &o, Fixed const &fix)
{
	o << fix.toFloat();
	return (o);
}

//! End External functions & operators

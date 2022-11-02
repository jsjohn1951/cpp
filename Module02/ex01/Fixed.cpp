/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:41:30 by wismith           #+#    #+#             */
/*   Updated: 2022/11/01 00:33:57 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed(): fixPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ): fixPoint(fixed.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int Int ): fixPoint(Int << this->fracBits)
{
	std::cout << "Int constructor called with value: " << Int << std::endl;
}

Fixed::Fixed( const float Float ): fixPoint(roundf(Float * (1 << this->fracBits)))
{
	std::cout << "Float constructor called with value: " << Float << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixPoint = fixed.getRawBits();
	return (*this);
}

std::ostream & operator << (std::ostream &o, Fixed const &afix)
{
	o << afix.toFloat();
	return (o);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixPoint);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixPoint = raw;
}

float	Fixed::toFloat() const
{
	return (((float) this->fixPoint / (float) (1 << this->fracBits)));
}

int		Fixed::toInt() const
{
	return ((this->fixPoint >> this->fracBits));
}

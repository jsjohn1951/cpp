/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:41:30 by wismith           #+#    #+#             */
/*   Updated: 2022/11/03 01:35:26 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

Fixed::Fixed(): fixPoint(0)
{
	// std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &fixed ): fixPoint(fixed.getRawBits())
{
	// std::cout << "Copy Constructor called" << std::endl;
}

Fixed::Fixed( const int Int ): fixPoint(Int << this->fracBits)
{
	// std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed( const float Float ): fixPoint(roundf(Float * (1 << this->fracBits)))
{
	// std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return (this->fixPoint);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

std::ostream & operator << (std::ostream &o, Fixed const &afix)
{
	o << afix.toFloat();
	return (o);
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixPoint = fixed.getRawBits();
	return (*this);
}

// + and  -

Fixed & Fixed::operator+(const Fixed &fixed)
{
	this->fixPoint += fixed.getRawBits();
	return (*this);
}

Fixed & Fixed::operator-(const Fixed &fixed)
{
	this->fixPoint -= fixed.getRawBits();
	return (*this);
}

// * and /

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed	Newfix(*this);
	float tmp1;

	tmp1 = this->toFloat() * fixed.toFloat();
	Newfix.setRawBits(tmp1 * (1 << this->fracBits));
	return (Newfix);
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed	Newfix(*this);
	float tmp1;

	tmp1 = this->toFloat() / fixed.toFloat();
	Newfix.setRawBits(tmp1 * (1 << this->fracBits));
	return (Newfix);
}

// increments (++) and decrement (--)

Fixed & Fixed::operator++()
{
	this->fixPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	pre(this->toFloat());
	operator++();
	return (pre);
}

Fixed & Fixed::operator--()
{
	this->fixPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	pre(this->toFloat());
	operator--();
	return (pre);
}

// booleans

bool Fixed::operator>(const Fixed &fixed)
{
	if (this->fixPoint > fixed.fixPoint)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &fixed)
{
	if (this->fixPoint < fixed.fixPoint)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	if (this->fixPoint >= fixed.fixPoint)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	if (this->fixPoint <= fixed.fixPoint)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &fixed)
{
	if (this->fixPoint == fixed.fixPoint)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fixed)
{
	if (this->fixPoint != fixed.fixPoint)
		return (true);
	return (false);
}

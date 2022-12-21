/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:05:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/21 18:15:14 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ConvScalar.hpp"

//! External functions

//! End External functions

//! External operators

std::ostream	&operator<<(std::ostream &o, const ConvScalar &c)
{
	o << "char: ";
	(c.getIsPrint(Char) ? o << "'" << c.getChar() << "'" << std::endl : (c.getChar() > 32 && c.getChar() < 127 ? o << "impossible" << std::endl : o << "Non displayable" << std::endl));
	o << "int: ";
	(c.getIsPrint(Int) ? o << c.getInt() << std::endl : o << "impossible" << std::endl);
	o << "float: ";
	(c.getIsPrint(Float) ? o << c.getFloat() << c.rtnDotZeroF() << std::endl : o << "impossible" << std::endl);
	o << "double: ";
	(c.getIsPrint(Double) ? o << c.getDouble() << c.rtnDotZeroD() : o << "impossible");
	return (o);
}

//! End External operators

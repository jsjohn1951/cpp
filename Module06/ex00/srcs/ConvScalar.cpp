/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:07:13 by wismith           #+#    #+#             */
/*   Updated: 2022/12/20 21:09:30 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ConvScalar.hpp"

//! Constructors

ConvScalar::ConvScalar()
{
	std::cout << "ConvScalar: Default Constructor" << std::endl;
}

ConvScalar::ConvScalar(const ConvScalar &c) : Lit(c.Lit), undefined(c.undefined), C(c.getChar()), I(c.getInt()), F(c.getFloat()), D(c.getDouble())
{
	std::cout << "ConvScalar: Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->setType(c.getType(i), i);
}

ConvScalar::ConvScalar(char *lit) : Lit(lit), undefined(false), C(0), I(0), F(0), D(0)
{
	std::cout << "ConvScalar: Literal Constructor" << std::endl;
}

//! End Constructors

//! Destructor

ConvScalar::~ConvScalar()
{
	std::cout << "ConvScalar: Destructor" << std::endl;
}

//! End Destructor

//! Operators

ConvScalar	&ConvScalar::operator=(const ConvScalar &c)
{
	(void) c;
	std::cout << "ConvScalar: Assignment Operator overload" << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const ConvScalar &c)
{
	o << "char: ";
	(c.getType(Char) ? o << c.getChar() << std::endl : (std::isprint(c.getChar()) ? o << "impossible" << std::endl : o << "Non displayable" << std::endl));
	o << "int: ";
	(c.getType(Int) ? o << c.getInt() << std::endl : o << "impossible" << std::endl);
	o << "float: ";
	(c.getType(Float) ? o << c.getFloat() << std::endl : o << "impossible" << std::endl);
	o << "double: ";
	(c.getType(Double) ? o << c.getDouble() : o << "impossible");
	return (o);
}

//! End Operators

//** --------------------------------------------------------------------- **//

//! Member functions

void	ConvScalar::convert()
{
	if (!this->getlit())
		throw (EmptyStr());
	std::string	str = this->getlit();
	this->setType(true, Char);
	this->setChar(str[0]);
}

//! End Member functions

//** --------------------------------------------------------------------- **//

//! Getters

char	*ConvScalar::getlit() const
{
	return (this->Lit);
}

bool	ConvScalar::getType(int i) const
{
	return (this->Type[i]);
}

char	ConvScalar::getChar() const
{
	return (this->C);
}

int		ConvScalar::getInt() const
{
	return (this->I);
}

float	ConvScalar::getFloat() const
{
	return (this->F);
}

double	ConvScalar::getDouble() const
{
	return (this->D);
}

//! End Getters

//! Setters

void	ConvScalar::setLit(char *lit)
{
	this->Lit = lit;
}

void	ConvScalar::setType(bool type, int i)
{
	this->Type[i] = type;
}

void		ConvScalar::setChar(char c)
{
	this->C = c;
}

void		ConvScalar::setInt(int i)
{
	this->I = i;
}

void		ConvScalar::setFloat(float f)
{
	this->F = f;
}

void		ConvScalar::setDouble(double d)
{
	this->D = d;
}

//! End Setters
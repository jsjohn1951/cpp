/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:07:13 by wismith           #+#    #+#             */
/*   Updated: 2022/12/21 14:03:17 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ConvScalar.hpp"

//! Constructors

ConvScalar::ConvScalar()
{
	std::cout << "ConvScalar: Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->setType(false, i);
}

ConvScalar::ConvScalar(const ConvScalar &c) : Lit(c.Lit), undefined(c.undefined), C(c.getChar()), I(c.getInt()), F(c.getFloat()), D(c.getDouble())
{
	std::cout << "ConvScalar: Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->setType(c.getType(i), i);
	for (int i = 0; i < 4; i++)
		this->setIsPrint(c.getIsPrint(i), i);
}

ConvScalar::ConvScalar(char *lit) : Lit(lit), undefined(false), C(0), I(0), F(0), D(0)
{
	std::cout << "ConvScalar: Literal Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->setType(false, i);
	for (int i = 0; i < 4; i++)
		this->setIsPrint(false, i);
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
	(c.getIsPrint(Char) ? o << c.getChar() << std::endl : (c.getChar() > 32 && c.getChar() < 127 ? o << "impossible" << std::endl : o << "Non displayable" << std::endl));
	o << "int: ";
	(c.getIsPrint(Int) ? o << c.getInt() << std::endl : o << "impossible" << std::endl);
	o << "float: ";
	(c.getIsPrint(Float) ? o << c.getFloat() << "f" << std::endl : o << "impossible" << std::endl);
	o << "double: ";
	(c.getIsPrint(Double) ? o << c.getDouble() : o << "impossible");
	return (o);
}

//! End Operators

//** --------------------------------------------------------------------- **//

//! Member functions

void	ConvScalar::convert()
{
	//** Check if string literal is empty
	if (!static_cast<std::string>(this->getlit()).length())
		throw (EmptyStr());

	//! Float Conversion
	this->setFloat(std::strtof(this->getlit(), NULL));
	this->setIsPrint(true, Float);

	//! Int Conversion
	this->setInt(static_cast<int>(this->getFloat()));
	this->setIsPrint(true, Int);

	//! Double Conversion
	this->setDouble(std::strtod(this->getlit(), NULL));
	this->setIsPrint(true, Double);

	//! Char Conversion
	(this->getInt() <= 31 || this->getInt() >= 127 || this->getInt() != this->getFloat() ? this->setIsPrint(false, Char) : this->setIsPrint(true, Char));
	(this->getInt() < 0 || this->getInt() > 127 ? this->setChar(50) : this->setChar(this->getInt()));
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

bool	ConvScalar::getIsPrint(int i) const
{
	return (this->isPrint[i]);
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

void	ConvScalar::setIsPrint(bool type, int i)
{
	this->isPrint[i] = type;
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
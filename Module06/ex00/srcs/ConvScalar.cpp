/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:07:13 by wismith           #+#    #+#             */
/*   Updated: 2022/12/23 10:22:54 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ConvScalar.hpp"

//! Constructors

ConvScalar::ConvScalar()
{
	std::cout << "ConvScalar: Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->setType(false, i);
	for (int i = 0; i < 4; i++)
		this->setIsPrint(false, i);
}

ConvScalar::ConvScalar(const ConvScalar &c) : Lit(c.Lit), C(c.getChar()), I(c.getInt()), F(c.getFloat()), D(c.getDouble())
{
	std::cout << "ConvScalar: Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->setType(c.getType(i), i);
	for (int i = 0; i < 4; i++)
		this->setIsPrint(c.getIsPrint(i), i);
}

ConvScalar::ConvScalar(char *lit) : Lit(lit), C(0), I(0), F(0), D(0)
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
	std::cout << "ConvScalar: Assignment Operator overload" << std::endl;
	if (this != &c)
	{
		this->setChar(c.getChar());
		this->setInt(c.getInt());
		this->setFloat(c.getFloat());
		this->setDouble(c.getDouble());
		for (int i = 0; i < 4; i++)
			this->setType(c.getType(i), i);
		for (int i = 0; i < 4; i++)
			this->setIsPrint(c.getIsPrint(i), i);
	}
	return (*this);
}

//! End Operators

//** --------------------------------------------------------------------- **//

//! Member functions

double	ConvScalar::doubleConv()
{
	std::string lit = static_cast<std::string>(this->getLit());

	if ((lit.length() > 1 && lit[lit.length() - 1] == 'e') || (lit.length() > 2 && lit[lit.length() - 1] == 'f' && lit[lit.length() - 2] == 'e') || (lit.length() > 1 && lit[0] == 'e'))
	{
		this->setType(true, Double);
		return (strtod("nan", NULL));
	}
	return (lit.length() == 1 && !std::isdigit(lit[0]) ? static_cast<double>(static_cast<int>(lit[0])) : strtod(this->getLit(), NULL));
}

int	ConvScalar::intConv()
{
	std::stringstream	ss;
	int					res;

	ss << static_cast<std::string>(this->getLit());
	ss >> res;
	return (res);
}

void	ConvScalar::handleSciNote()
{
	std::string lit = static_cast<std::string>(this->getLit());

	if (count(lit.begin(), lit.end(), 'e') > 1)
		throw (InvalidInput());
	for (unsigned long i = 0; lit.length() > 1 && i < lit.length(); i++)
	{
		if (!std::isdigit(lit[i]) && lit[i] != '.' && lit[i] != 'e' && lit[i] != 'f' && lit[i] != '+' && lit[i] != '-')
			throw (InvalidInput());
	}
}

void	ConvScalar::errCheck()
{
	std::string lit = static_cast<std::string>(this->getLit());

	//** Check if string literal is empty
	if (!lit.length())
		throw (EmptyStr());
	if (lit == "-inff" || lit == "+inff" || lit == "nanf" || lit == "-inf" || lit == "+inf" || lit == "nan")
		return (this->setType(true, Double));
	this->handleSciNote();
	if (count(lit.begin(), lit.end(), 'f') > 1 || (count(lit.begin(), lit.end(), 'f') == 1 && lit[lit.length() - 1] != 'f'))
		throw (InvalidInput());
	if (count(lit.begin(), lit.end(), '.') > 1)
		throw (InvalidInput());
	if (lit.length() == 1 && lit[0] >= 32 && lit[0] <= 126)
		return (this->setType(true, Char));
	((!count(lit.begin(), lit.end(), '.') || lit[lit.find('.') + 1] == '0') && !(lit.length() > 1 && count(lit.begin(), lit.end(), 'e')) ? this->setType(true, Int) : this->setType(true, Double));
}

void	ConvScalar::fromDouble()
{
	//! Double Conversion
	this->setDouble(doubleConv());
	this->setIsPrint(true, Double);

	//! Float Conversion
	if (this->getDouble() <= FLT_MAX)
	{
		this->setFloat(static_cast<float>(this->getDouble()));
		this->setIsPrint(true, Float);
	}

	//! Int Conversion
	this->setInt(static_cast<int>(this->getDouble()));
	(this->getInt() == INT_MIN ? this->setIsPrint(false, Int) : this->setIsPrint(true, Int));

	//! Char Conversion
	(this->getInt() <= 31 || this->getInt() >= 127 || this->getInt() != this->getDouble() ? this->setIsPrint(false, Char) : this->setIsPrint(true, Char));
	(this->getInt() < 0 || this->getInt() > 127 ? this->setChar(50) : this->setChar(static_cast<char>(static_cast<int>(this->getDouble()))));
}

void	ConvScalar::fromInt()
{
	//! Int Conversion
	this->setInt(this->intConv());
	this->setIsPrint(true, Int);

	//! Char Conversion
	(this->getInt() <= 31 || this->getInt() >= 127 ? this->setIsPrint(false, Char) : this->setIsPrint(true, Char));
	(this->getInt() < 0 || this->getInt() > 127 ? this->setChar(0) : this->setChar(static_cast<char>(this->getInt())));

	//! Double Conversion
	this->setDouble(static_cast<double>(this->getInt()));
	this->setIsPrint(true, Double);

	//! Float Conversion
	this->setFloat(static_cast<float>(this->getInt()));
	this->setIsPrint(true, Float);
}

void	ConvScalar::fromChar()
{
	//! Char Conversion
	this->setChar(static_cast<char>(this->getLit()[0]));
	this->setIsPrint(true, Char);

	//! Int Conversion
	this->setInt(static_cast<int>(this->getChar()));
	this->setIsPrint(true, Int);

	//! Double Conversion
	this->setDouble(static_cast<double>(this->getInt()));
	this->setIsPrint(true, Double);

	//! Float Conversion
	this->setFloat(static_cast<float>(this->getInt()));
	this->setIsPrint(true, Float);
}

void	ConvScalar::convert()
{
	//! check for errors
	errCheck();

	//! Convert
	if (this->getType(Double))
		this->fromDouble();
	else if (this->getType(Char))
		this->fromChar();
	else if (this->getType(Int))
		this->fromInt();
}

std::string	ConvScalar::rtnDotZeroF() const
{
	if (this->getType(Double) && this->getInt() == this->getDouble())
		return (".0f");
	return (this->getType(Double) ? "f" : ".0f");
}

std::string	ConvScalar::rtnDotZeroD() const
{
	if (this->getType(Double) && this->getInt() == this->getDouble())
		return (".0");
	return (this->getType(Double) ? "" : ".0");
}

//! End Member functions

//** --------------------------------------------------------------------- **//

//! Getters

char	*ConvScalar::getLit() const
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:07:13 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 13:01:59 by wismith          ###   ########.fr       */
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
	return (strtod(this->getLit(), NULL));
}

long long	ConvScalar::intConv()
{
	std::stringstream	ss;
	long long			res;

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
	if (this->isPseudoFloat())
		return (this->setType(true, Float));
	if (this->isPseudoDouble())
		return (this->setType(true, Double));
	this->handleSciNote();
	if (count(lit.begin(), lit.end(), 'f') > 1 || (count(lit.begin(), lit.end(), 'f') == 1 && lit[lit.length() - 1] != 'f'))
		throw (InvalidInput());
	if (count(lit.begin(), lit.end(), '.') > 1)
		throw (InvalidInput());
}

void	ConvScalar::findType()
{
	std::string lit = static_cast<std::string>(this->getLit());

	if (this->getType(Double) || this->getType(Float))
		return ;
	if (lit.length() == 1 && lit[0] >= 32 && lit[0] <= 126 && !(lit[0] >= '0' && lit[0] <= '9'))
		return (this->setType(true, Char));
	if (count(lit.begin(), lit.end(), 'f'))
		return (this->setType(true, Float));
	if (count(lit.begin(), lit.end(), '.') || count(lit.begin(), lit.end(), 'e'))
		return (this->setType(true, Double));
	return (this->setType(true, Int));
}

void	ConvScalar::fromDouble()
{
	std::cout << "Convert from Double : " << std::endl;
	//! Double Conversion
	this->setDouble(doubleConv());
	this->setIsPrint(true, Double);

	if ((this->getDouble() <= FLT_MAX && this->getDouble() >= -FLT_MAX) || this->isPseudoDouble())
	{
		//! Float Conversion
		this->setFloat(static_cast<float>(this->getDouble()));
		this->setIsPrint(true, Float);

		if (this->getDouble() <= INT_MAX && this->getDouble() >= INT_MIN)
		{
			//! Int Conversion
			this->setInt(static_cast<int>(this->getDouble()));
			this->setIsPrint(true, Int);
	
			//! Char Conversion
			(this->getFloat() == this->getInt() && this->getFloat() > 0 && this->getFloat() < 128 ? this->setIsPrint(true, Char) : this->setIsPrint(false, Char));
			this->setChar(static_cast<char>(static_cast<int>(this->getInt())));
		}
	}
}

void	ConvScalar::fromFloat()
{
	std::cout << "Convert from Float : " << std::endl;
	if ((this->doubleConv() <= FLT_MAX && this->doubleConv() >= -FLT_MAX) || this->isPseudoFloat())
	{
		//! Float Conversion
		this->setFloat(static_cast<float>(this->doubleConv()));
		this->setIsPrint(true, Float);

		//! Double Conversion
		this->setDouble(static_cast<double>(this->getFloat()));
		this->setIsPrint(true, Double);

		if (this->getFloat() <= INT_MAX && this->getFloat() >= INT_MIN)
		{
			//! Int Conversion
			this->setInt(static_cast<int>(this->getFloat()));
			this->setIsPrint(true, Int);
		
			//! Char Conversion
			(this->getFloat() == this->getInt() && this->getFloat() > 0 && this->getFloat() < 128 ? this->setIsPrint(true, Char) : this->setIsPrint(false, Char));
			this->setChar(static_cast<char>(static_cast<int>(this->getInt())));
		}
	}
}

void	ConvScalar::fromInt()
{
	std::cout << "Convert from Int : " << std::endl;
	if (this->intConv() <= INT_MAX && this->intConv() >= INT_MIN)
	{
		//! Int Conversion
		this->setIsPrint(true, Int);
		this->setInt(static_cast<int>(this->intConv()));

		//! Char Conversion
		(this->getInt() > -1 && this->getInt() < 128 ? this->setIsPrint(true, Char) : this->setIsPrint(false, Char));
		(this->getInt() < 0 || this->getInt() > 127 ? this->setChar(0) : this->setChar(static_cast<char>(this->getInt())));

		//! Double Conversion
		this->setDouble(static_cast<double>(this->getInt()));
		this->setIsPrint(true, Double);

		//! Float Conversion
		this->setFloat(static_cast<float>(this->getInt()));
		this->setIsPrint(true, Float);
	}
}

void	ConvScalar::fromChar()
{
	std::cout << "Convert from Char : " << std::endl;
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
	int	i = 0;

	//! check for errors
	this->errCheck();

	//! find Str Type
	this->findType();

	//! Convert
	for(; i < 4 && !this->getType(i); i++)
		;
	switch (i)
	{
		case Int :
			this->fromInt();
		break ;
		case Char :
			this->fromChar();
		break ;
		case Float :
			this->fromFloat();
		break ;
		case Double :
			this->fromDouble();
		break ;
	};
}

std::string	ConvScalar::rtnDotZeroF() const
{
	return (this->getInt() == this->getDouble() ? ".0f" : "f");
}

std::string	ConvScalar::rtnDotZeroD() const
{
	return (this->getInt() == this->getDouble() ? ".0" : "");
}

bool		ConvScalar::isPseudoDouble()
{
	std::string lit = static_cast<std::string>(this->getLit());
	if (lit == "-inf" || lit == "+inf" || lit == "nan")
		return (true);
	return (false);
}

bool		ConvScalar::isPseudoFloat()
{
	std::string lit = static_cast<std::string>(this->getLit());
	if (lit == "-inff" || lit == "+inff" || lit == "nanf")
		return (true);
	return (false);
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

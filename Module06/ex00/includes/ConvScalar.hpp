/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:03:50 by wismith           #+#    #+#             */
/*   Updated: 2022/12/23 10:59:28 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CONVSCALAR
# define CONVSCALAR

# include <iostream>
# include <climits>
# include <cfloat>
# include <algorithm>
# include <sstream>
# include "Exceptions.hpp"

# define Int 0
# define Double 1
# define Char 2
# define Float 3
# define Default 4

class ConvScalar
{
	private :
		//! Attributes
		char		*Lit;
		bool		isPrint[4];
		bool		Type[4];

		//! Store Type Attributes
		char		C;
		int			I;
		float		F;
		double		D;

		//! Getters
		char 		*getLit() const;

		//! Setters
		void		setType(bool type, int i);
		void		setIsPrint(bool pr, int i);
		void		setChar(char c);
		void		setInt(int i);
		void		setFloat(float f);
		void		setDouble(double d);

		//! Checker
		void		errCheck();
		void		handleSciNote();
		double		doubleConv();
		int			intConv();

		//! Converters
		void		fromDouble();
		void		fromFloat();
		void		fromInt();
		void		fromChar();

	public :
		//! Constructors
		ConvScalar();
		ConvScalar(const ConvScalar &c);
		ConvScalar(char *lit);

		//! Destructor
		~ConvScalar();

		//! Operators
		ConvScalar	&operator=(const ConvScalar &c);

		//! Member functions
		void		convert();
		std::string	rtnDotZeroF() const;
		std::string	rtnDotZeroD() const;

		//! Public setter
		void		setLit(char *lit);

		//! Public getters
		bool		getType(int i) const;
		bool		getIsPrint(int i) const;
		char		getChar() const;
		int			getInt() const;
		float		getFloat() const;
		double		getDouble() const;
};

std::ostream	&operator<<(std::ostream &o, const ConvScalar &c);

#endif
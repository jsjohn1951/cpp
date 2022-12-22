/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScalar.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:03:50 by wismith           #+#    #+#             */
/*   Updated: 2022/12/22 14:09:14 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CONVSCALAR
# define CONVSCALAR

# include <iostream>
# include <climits>
# include <algorithm>
# include "Exceptions.hpp"

# define Int 0
# define Float 1
# define Char 2
# define Double 3
# define Default 4

class ConvScalar
{
	private :
		//! Attributes
		char		*Lit;
		bool		undefined;
		bool		isPrint[4];
		bool		Type[2];

		//! Store Type Attributes
		char		C;
		int			I;
		float		F;
		double		D;

		//! Getters
		char 		*getlit() const;

		//! Setters
		void		setType(bool type, int i);
		void		setIsPrint(bool pr, int i);
		void		setChar(char c);
		void		setInt(int i);
		void		setFloat(float f);
		void		setDouble(double d);

		//! Checker
		bool	errCheck(std::string lit);

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
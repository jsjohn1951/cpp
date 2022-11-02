/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:56:19 by wismith           #+#    #+#             */
/*   Updated: 2022/11/01 00:28:39 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixPoint;
		static const int	fracBits = 8;
	public:
		Fixed();
		Fixed( const Fixed &fixed );
		Fixed( const int Int );
		Fixed( const float Float );
		~Fixed();
		Fixed & operator = (const Fixed &fixed);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator << (std::ostream &o, Fixed const &afix);

#endif
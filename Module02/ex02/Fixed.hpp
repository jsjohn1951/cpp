/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:56:19 by wismith           #+#    #+#             */
/*   Updated: 2022/11/03 01:36:28 by wismith          ###   ########.fr       */
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
		Fixed & operator + (const Fixed &fixed);
		Fixed & operator - (const Fixed &fixed);
		Fixed operator * (const Fixed &fixed);
		Fixed operator / (const Fixed &fixed);

		Fixed & operator ++();
		Fixed operator ++(int);
		Fixed & operator --();
		Fixed operator --(int);

		bool operator > (const Fixed &fixed);
		bool operator < (const Fixed &fixed);
		bool operator >= (const Fixed &fixed);
		bool operator <= (const Fixed &fixed);
		bool operator == (const Fixed &fixed);
		bool operator != (const Fixed &fixed);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator << (std::ostream &o, Fixed const &afix);
void	boolean_tests(void);
void	min_max(const Fixed &a, const Fixed &b);
void	add_sub();
void	multi_div();

#endif
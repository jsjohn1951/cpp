/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:52:51 by wismith           #+#    #+#             */
/*   Updated: 2022/11/27 17:34:05 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					val;
		static const int	fracBits = 8;
	public:

		Fixed();
		Fixed(const Fixed &fix);

		Fixed(const int intNum);
		Fixed(const float floatNum);

		~Fixed();

		Fixed	&operator=(Fixed const &fix);

		//! 6 Comparison operators
		bool	operator>(Fixed const &fix);
		bool	operator<(Fixed const &fix);
		bool	operator>=(Fixed const &fix);
		bool	operator<=(Fixed const &fix);
		bool	operator==(Fixed const &fix);
		bool	operator!=(Fixed const &fix);

		//! 4 arithmetic operators
		float	operator+(Fixed const &fix);
		float	operator-(Fixed const &fix);
		float	operator*(Fixed const &fix);
		float	operator/(Fixed const &fix);

		//! 4 arithmetic operators
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fix);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:56:19 by wismith           #+#    #+#             */
/*   Updated: 2022/10/29 23:34:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					fixPoint;
		static const int	fracBits = 8;
	public:
		Fixed();
		Fixed( const Fixed &fixed );
		~Fixed();
		Fixed & operator = (const Fixed &fixed);
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
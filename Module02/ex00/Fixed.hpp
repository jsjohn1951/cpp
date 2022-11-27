/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:52:51 by wismith           #+#    #+#             */
/*   Updated: 2022/11/26 23:12:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					val;
		static const int	fracBits = 8;
	public:

		Fixed();
		Fixed(const Fixed &fix);
		~Fixed();

		Fixed	&operator=(Fixed const &fix);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
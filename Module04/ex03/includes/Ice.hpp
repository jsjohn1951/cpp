/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:26:51 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 15:59:55 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
	//! Ortho functions
		Ice();
		Ice(const Ice &c);
		~Ice();

	//! assignment overload operator
		Ice		&operator=(const Ice &c);

	//! Subject required Member functions
		void	use(ICharacter& target);
		Ice		*clone(void) const;
};

#endif
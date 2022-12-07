/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:00:22 by wismith           #+#    #+#             */
/*   Updated: 2022/12/07 23:14:44 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
	//! Ortho functions
		Cure();
		Cure(const Cure &c);
		~Cure();
	
	//! assignment overload operator
		Cure	&operator=(const Cure &c);
		
	//! Subject required Member functions
		void	use(ICharacter& target);
		Cure	*clone(void) const;
};

#endif
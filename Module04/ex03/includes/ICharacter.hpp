/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:43:25 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 15:57:23 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

// class AMateria;

class ICharacter
{
	public:
	//! Ortho functions
		//** Constructors
		ICharacter();
		ICharacter(const ICharacter &ch);

		//** Assignmnet overload Operator
		ICharacter	&operator=(const ICharacter &ch);

	//! Functions given by subject
		//** Destructor
		virtual ~ICharacter();

		//** Member functions
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
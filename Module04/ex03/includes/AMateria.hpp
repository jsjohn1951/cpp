/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:49:07 by wismith           #+#    #+#             */
/*   Updated: 2022/12/07 23:25:51 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected :
		//! protected Arributes
		std::string	type;

	public :
		//! Ortho required constructors
		AMateria();
		AMateria(const AMateria &am);

		//! Subject required addition to the class
		AMateria(std::string const & type);

		//! Ortho required destructor
		virtual ~AMateria();

		//! Ortho required assignment operator overload
		AMateria	&operator=(const AMateria &am);

		//! Member functions
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		void	setType(std::string type);
};

#endif
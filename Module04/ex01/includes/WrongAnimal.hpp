/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:23:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 16:12:40 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private :
		std::string	type;
	public :
	//! Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &w);

	//! Destructor
		virtual ~WrongAnimal();
	
	//! Operators
		WrongAnimal	&operator=(const WrongAnimal &w);

	//! member functions
		void			set_type(std::string t);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
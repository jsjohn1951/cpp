/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:23:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/05 18:45:20 by wismith          ###   ########.fr       */
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
		WrongAnimal();
		WrongAnimal(const WrongAnimal &w);
		virtual ~WrongAnimal();

		WrongAnimal	&operator=(const WrongAnimal &w);

		//! member functions
		void			set_type(std::string t);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:15:21 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 19:27:39 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected :
		std::string	type;

	public :
		Animal();
		Animal(Animal &a);
		~Animal();

		Animal			&operator=(Animal &a);

		//! member functions
		void			set_type(std::string t);
		std::string		get_type(void);
		virtual void	makeSound(void);
};

#endif
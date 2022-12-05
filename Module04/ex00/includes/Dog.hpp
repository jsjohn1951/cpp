/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:21 by wismith           #+#    #+#             */
/*   Updated: 2022/12/05 17:20:19 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &d);
		~Dog();

		Dog	&operator=(const Dog &d);

		//! member functions
		void	makeSound(void) const;
};

#endif
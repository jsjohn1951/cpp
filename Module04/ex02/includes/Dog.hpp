/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:09:21 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 16:13:37 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public :
	//! Constructors
		Dog();
		Dog(const Dog &d);
	
	//! Destructor
		~Dog();

	//! Operators
		Dog	&operator=(const Dog &d);

	//! member functions
		void	makeSound(void) const;
		Brain	*getBrain(void);
};

#endif
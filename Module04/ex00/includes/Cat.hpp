/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:43:58 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 16:05:29 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public :
	//! Constructors
		Cat();
		Cat(const Cat &c);
	
	//! Destructor
		~Cat();

	//! Operators
		Cat		&operator=(const Cat &c);

	//! Member functions
		void	makeSound(void) const;
};

#endif
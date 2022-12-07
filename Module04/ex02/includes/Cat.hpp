/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:43:58 by wismith           #+#    #+#             */
/*   Updated: 2022/12/06 22:17:17 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public :
		Cat();
		Cat(const Cat &c);
		~Cat();
		Cat		&operator=(const Cat &c);

		//! Member functions
		void	makeSound(void) const;
		Brain	*getBrain(void);
};

#endif
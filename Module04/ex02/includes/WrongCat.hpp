/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:28:32 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 16:05:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	//! Constructors
		WrongCat();
		WrongCat(const WrongCat &w);
	
	//! Destructor
		~WrongCat();

	//! Operators
		WrongCat	&operator=(const WrongCat &w);

	//! Member functions
		void		makeSound(void) const;
};

#endif
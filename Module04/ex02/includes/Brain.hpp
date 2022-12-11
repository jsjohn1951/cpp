/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:26:48 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 17:26:04 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
	//! Constructors
		Brain();
		Brain(const Brain &b);

	//! Destructor
		~Brain();

	//! Operators
		Brain &operator=(const Brain &b);


	//! Member functions
		std::string	getIdea(int i) const;
		void		setIdea(int i, const std::string idea);
		void		setAllIdeas(Brain *b);
};

#endif
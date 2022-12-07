/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:26:48 by wismith           #+#    #+#             */
/*   Updated: 2022/12/06 17:43:57 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &b);
		~Brain();
		Brain &operator=(const Brain &b);

		std::string ideas[100];
		std::string	*getIdeas(void);
		void		setIdeas(const std::string *ideasEntry);
};

#endif
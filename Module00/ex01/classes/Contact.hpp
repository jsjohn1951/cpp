/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:43:59 by wismith           #+#    #+#             */
/*   Updated: 2022/08/20 23:10:33 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class	Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string phone_number;
		std::string	secret;
	public:
		void	add_(void);
		void	display(int index);
		void	entry_display(std::string n);
		void	display_person(void);
};

#endif
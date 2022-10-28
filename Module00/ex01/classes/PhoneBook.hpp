/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:44:50 by wismith           #+#    #+#             */
/*   Updated: 2022/10/25 16:02:30 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class	PhoneBook
{
	private:
		Contact	c_obj[8];
		int		num;
	public:
		void	add_contact();
		int		set_num(int x);
		void	display(void);
		void	search(void);
		void	header();
};

void	phonebook_header(void);

#endif
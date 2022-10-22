/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:16:34 by wismith           #+#    #+#             */
/*   Updated: 2022/10/22 15:44:41 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../classes/PhoneBook.hpp"
#include <string>

void	PhoneBook::header(void)
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "list:\n" << std::endl;
	std::cout << "     \x1B[31mIndex\x1B[0m|\x1B[32mFirst Name\x1B[0m|";
	std::cout << " \x1B[35mLast name\x1B[0m|  \x1B[34mNickname\x1B[0m|\n" << std::endl;
	for (int index = 0; index < this->num; index++)
		this->c_obj[index].display(index + 1);
	std::cout << "--------------------------------------------" << std::endl;
}

void	PhoneBook::search(void)
{
	int			i;
	std::string	input;

	i = 0;
	this->header();
	std::cout << std::endl << "Search index:\t";
	std::cin >> input;
	std::cout << "\e[1;1H\e[2J";
	if (input.size() == 1 && input[0] >= '1' && input[0] <= '9')
		i = input[0] - '0';
	if (!i || i > this->num)
		std::cout << "Can't search for someone who doesn't exist!" << std::endl;
	else
			this->c_obj[i - 1].display_person();
}

int	PhoneBook::set_num(int x)
{
	this->num = x;
	return (this->num);	
}

void	PhoneBook::add_contact(int *num)
{
	static int	nu;
	
	if (*num < 8)
	{
		this->c_obj[*num].add_();
		set_num(++*num);
	}
	else
	{
		this->c_obj[nu].add_();
		nu++;
		if (nu == 8)
			nu = 0;
	}
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:16:34 by wismith           #+#    #+#             */
/*   Updated: 2022/10/25 16:07:29 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../classes/PhoneBook.hpp"

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
	int			input;
	char		in;

	this->header();
	std::cout << std::endl << "Search index:\t";
	std::cin >> in;
	std::cout << "\e[1;1H\e[2J";
	input = in - '0';
	if (!input || input > this->num)
		std::cout << "Can't search for someone who doesn't exist!" << std::endl;
	else
			this->c_obj[input - 1].display_person();
}

int	PhoneBook::set_num(int x)
{
	this->num = x;
	return (this->num);
}

void	PhoneBook::add_contact()
{
	static int	nu;
	static int	max;

	this->c_obj[nu].add_();
	nu++;
	max++;
	if (max <= 8)
		set_num(nu);
	if (nu == 8)
		nu = 0;
	return ;
}

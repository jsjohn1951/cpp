/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:12:34 by wismith           #+#    #+#             */
/*   Updated: 2022/10/25 15:41:56 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../classes/Contact.hpp"

void	Contact::add_(void)
{
	std::cout << "Name: ";
	std::getline(std::cin >> std::ws, name);
	std::cout << "last name: ";
	std::getline(std::cin >> std::ws, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin >> std::ws, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin >> std::ws, secret);
}

void	Contact::display_person(void)
{
	std::cout << "Entry: \n" << std::endl;
	std::cout << "\x1B[31m";
	std::cout << "\tName:\t\t" << this->name << std::endl;
	std::cout << "\tlast name:\t" << this->last_name << std::endl;
	std::cout << "\tNickname:\t" << this->nickname << std::endl;
	std::cout << "\tPhone number:\t" << this->phone_number << std::endl;
	std::cout << "\tDarkest secret:\t" << this->secret << std::endl;
	std::cout << "\x1B[0m";
}

void	Contact::entry_display(std::string n)
{
	int		len;

	len = n.size();
	if (len > 10)
		std::cout << n.substr(0, 9) << ".";
	else
	{
		for (int sp = 10 - len + 1; sp > 1; sp--)
			std::cout << " ";
		std::cout << n;
	}
}

void	Contact::display(int index)
{
	for(int sp = 0; sp < 9; sp++)
		std::cout << " ";
	std::cout << index << "|";
	entry_display(name);
	std::cout << "|";
	entry_display(last_name);
	std::cout << "|";
	entry_display(nickname);
	std::cout << "|";
	std::cout << std::endl;
}

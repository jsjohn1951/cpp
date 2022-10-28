/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:01:23 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 17:24:45 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl walks into restaurant" << std::endl;
	std::cout << "* Whining Starts *" << std::endl << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "* Harl gets hit by frying pan *" << std::endl;
	std::cout << "Cook shouts: 'Enough with your whining!'" << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	cmp[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (cmp[i] == level)
		{
			switch (i)
			{
				case 0:
					Harl::debug();
				break ;
				case 1:
					Harl::info();
				break ;
				case 2:
					Harl::warning();
				break ;
				case 3:
					Harl::error();
				break ;
			};
			return ;
		}
	}
	std::cout
	<< "Cook: 'Can't hear what you're saying!'"
	<< std::endl
	<< std::endl;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
		<< std::endl
		<< "I really do!"
		<< std::endl
		<< std::endl;
	Harl::info();
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout
		<< "Cannot believe adding extra bacon costs more money. "
		<< std::endl
		<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl
		<< std::endl;
	Harl::warning();
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< std::endl
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl
		<< std::endl;
	Harl::error();
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl
		<< std::endl;
}

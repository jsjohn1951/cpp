/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:14:26 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 16:42:39 by wismith          ###   ########.fr       */
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
	std::cout << "* got hit by frying pan *" << std::endl;
	std::cout << "Cook shouts: 'Enough with your whining!'" << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	cmp[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (cmp[i] == level)
		{
			(this->*ptr[i]) ();
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
	std::cout
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl
		<< std::endl;
}

void	Harl::info()
{
	std::cout
		<< "Cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
		<< std::endl
		<< std::endl;
}

void	Harl::warning()
{
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl
		<< std::endl;
}

void	Harl::error()
{
	std::cout
		<< "This is unacceptable! I want to speak to the manager now."
		<< std::endl
		<< std::endl;
}

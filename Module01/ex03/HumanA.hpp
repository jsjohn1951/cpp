/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:02:13 by wismith           #+#    #+#             */
/*   Updated: 2022/10/28 12:10:10 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANA_HPP
# define HUMANA_HPP

#include "./Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string n, Weapon &type);
		~HumanA();
		void	attack();
};

#endif
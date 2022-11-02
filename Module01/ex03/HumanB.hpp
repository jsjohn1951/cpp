/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:28:47 by wismith           #+#    #+#             */
/*   Updated: 2022/10/30 21:42:32 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "./Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string n);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif
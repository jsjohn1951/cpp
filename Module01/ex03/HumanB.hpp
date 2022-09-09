/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:09:06 by wismith           #+#    #+#             */
/*   Updated: 2022/09/09 15:39:21 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &w);
	void	attack();
};

#endif

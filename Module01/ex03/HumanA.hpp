/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:41:19 by wismith           #+#    #+#             */
/*   Updated: 2022/09/09 15:36:04 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weapon;
public:
	void	attack();
	HumanA(std::string n, Weapon &w);
	~HumanA();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:30:28 by wismith           #+#    #+#             */
/*   Updated: 2022/09/09 15:30:14 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string w);
	const std::string	&getType();
	void				setType(std::string t);
	// ~Weapon();
};

#endif

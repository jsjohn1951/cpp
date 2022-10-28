/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:42:38 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 16:51:34 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string);
		~Weapon();
		const std::string	&getType();
		void	setType(std::string);
};

#endif
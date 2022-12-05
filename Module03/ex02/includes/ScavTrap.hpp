/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:57:35 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 14:48:33 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(ScavTrap &scav);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap &scav);

		void	attack(const std::string &target);
		void	guardGate();
};

#endif
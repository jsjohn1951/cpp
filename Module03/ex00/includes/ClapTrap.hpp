/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:20:22 by wismith           #+#    #+#             */
/*   Updated: 2022/11/30 21:09:57 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private :
		std::string		Name;
		unsigned int	hit_p;
		unsigned int	energy_p;
		unsigned int	Attack_d;

	public :
	ClapTrap();
	ClapTrap(ClapTrap &c);

	ClapTrap(std::string name);

	~ClapTrap();

	ClapTrap	&operator=(ClapTrap &c);

	//! member functions
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	//! other
	void	retrieveAttr(void);

	//** setters
	int		set_hp(long hp);
	int		set_ep(long hp);
	int		set_attack_d(long ad);
	//** getters
	unsigned int	get_hp(void);
	unsigned int	get_ep(void);
	unsigned int	get_attack_d(void);
};

#endif
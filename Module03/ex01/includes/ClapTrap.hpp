/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:20:22 by wismith           #+#    #+#             */
/*   Updated: 2022/12/04 17:20:42 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected :
		std::string		Name;
		unsigned int	hit_p;
		unsigned int	energy_p;
		unsigned int	Attack_d;

	public :
	ClapTrap();
	ClapTrap(ClapTrap &c);

	ClapTrap(std::string name);

	virtual ~ClapTrap();

	ClapTrap	&operator=(ClapTrap &c);

	//! member functions
	virtual void	attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	//** setters
	void			set_hp(long hp);
	void			set_name(const std::string &name);
	void			set_ep(long hp);
	void			set_attack_d(long ad);
	//** getters
	unsigned int	get_hp(void);
	unsigned int	get_ep(void);
	unsigned int	get_attack_d(void);
	std::string		get_name(void);

	//! other
	void			retrieveAttr(void);
};

#endif
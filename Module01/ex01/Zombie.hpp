/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:57:10 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 15:45:04 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
		int			tag;
	public:
		Zombie();
		~Zombie();
		void	announce ();
		void	setName(std::string name, int t);
};

Zombie	*zombieHorde(int N, std::string name);

#endif

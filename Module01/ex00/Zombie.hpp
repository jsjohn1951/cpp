/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:02:55 by wismith           #+#    #+#             */
/*   Updated: 2022/10/27 15:43:41 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string n);
		~Zombie();
		void	announce( void );
};

Zombie	*newZombie (std::string name);
void	randomChump( std::string name );

#endif

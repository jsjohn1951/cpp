/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:06:52 by wismith           #+#    #+#             */
/*   Updated: 2022/08/22 21:47:32 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	private:
		std::string name;
	public:
		~Zombie(void);
		void announce(void);
		void one_bite(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
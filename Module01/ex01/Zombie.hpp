/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:06:52 by wismith           #+#    #+#             */
/*   Updated: 2022/08/28 23:18:24 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	private:
		std::string name;
		int			tag;
	public:
		~Zombie(void);
		void announce(void);
		void	one_bite(std::string n, int t);
};

Zombie* zombieHorde( int N, std::string name );

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:05:41 by wismith           #+#    #+#             */
/*   Updated: 2022/12/02 14:10:40 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FRAPTRAP_HPP
# define FRAPTRAP_HPP

# include "ClapTrap.hpp"

class FrapTrap : public ClapTrap
{
	public :
		FrapTrap();
		FrapTrap(std::string name);
		FrapTrap(FrapTrap &frap);
		~FrapTrap();
		FrapTrap	&operator=(FrapTrap &frap);

		void		highFiveGuys(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:45:45 by wismith           #+#    #+#             */
/*   Updated: 2022/12/08 23:24:41 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
	//! Attributes
		std::string Name;
		int			numEntries;
		int			numOnFloor;
		AMateria	*inventoryEntry[4];
		AMateria	*cache[4];

	//! Private member functions
		//** initializer
		void		initInventory(void);
		void		initCache(void);
		void		freeCache(void);

		//** Setters
		void		setInventoryEntry(int i, AMateria *ie);
		void		injectCache(int i, AMateria *ie);
		void		setNumEntries(int i);
		void		setNumOnFloor(int i);

		//** Getter
		AMateria	*getMateria(int i) const;
		AMateria	*getCache(int i) const;
		int			getNumEntries(void) const;
		int			getNumOnFloor(void) const;
		
	public :
	//! Ortho funtions
		//** Constructors
		Character();
		Character(const Character &c);
		Character(const std::string name);
		
		//** Destructor
		~Character();
		
		//** Assignment Operator Overload
		Character	&operator=(const Character &c);
	
	//! Member functions
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:40:57 by wismith           #+#    #+#             */
/*   Updated: 2022/12/09 15:15:19 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private :
	//! Attributes
		AMateria	*templates[4];
		int			numEntries;
	
	//! private member functions
		//** init
		void		initTemplates(void);
		void		freeTemplates(void);
		
	public :
	//! Ortho functions
		MateriaSource();
		MateriaSource(const MateriaSource &m);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &m);
	
	//! Member functions
		//** subject required functions
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);

		//** setters & getters
		void		injectTemplate(int idx, AMateria *m);
		void		setNumEntries(int i);
		AMateria	*getTemplate(int idx) const;
		int			getNumEntries(void);
};

#endif
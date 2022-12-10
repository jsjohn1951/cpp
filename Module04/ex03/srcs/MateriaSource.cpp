/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:52:48 by wismith           #+#    #+#             */
/*   Updated: 2022/12/10 14:49:04 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

//! Constructors

MateriaSource::MateriaSource() : numEntries(0)
{
	// std::cout << "MateriaSource Default Constructor" << std::endl;
	this->initTemplates();
}

MateriaSource::MateriaSource(const MateriaSource &m) : IMateriaSource(), numEntries(0)
{
	// std::cout << "MateriaSource Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->injectTemplate(i, m.getTemplate(i));
}

//! End Constructors

//! Destructor

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource Destructor" << std::endl;
	this->freeTemplates();
}

//! End Destructor

//! Operators

MateriaSource	&MateriaSource::operator=(const MateriaSource &m)
{
	if (this != &m)
	{
		for (int i = 0; i < 4; i++)
			this->injectTemplate(i, m.getTemplate(i));
	}
	return (*this);
}

//! End Operators

//! Member functions

void	MateriaSource::initTemplates(void)
{
	for (int i = 0; i < 4; i++)
		injectTemplate(i, NULL);
}

void	MateriaSource::freeTemplates(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->getTemplate(i))
			delete this->getTemplate(i);
		this->injectTemplate(i, NULL);
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->getNumEntries() < 4)
	{
		this->injectTemplate(this->getNumEntries(), m);
		this->setNumEntries(this->getNumEntries() + 1);
	}
	else
	{
		if (m)
			delete m;
		std::cout << "learnMateria: You've reached the maximum capacity for templates" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->getTemplate(i) && this->getTemplate(i)->getType() == type)
			return (this->getTemplate(i)->clone());
	std::cout << "createMateria: unable to pinpoint template! Unknown type" << std::endl;
	return (0);
}

void	MateriaSource::injectTemplate(int idx, AMateria *m)
{
	this->templates[idx] = m;
}

void	MateriaSource::setNumEntries(int i)
{
	this->numEntries = i;
}

AMateria	*MateriaSource::getTemplate(int idx) const
{
	return (this->templates[idx]);
}

int		MateriaSource::getNumEntries(void)
{
	return (this->numEntries);
}

//! End Member functions
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:46:27 by wismith           #+#    #+#             */
/*   Updated: 2022/12/09 16:06:28 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

//! Constructors

Character::Character() : Name("Random Dude"), numEntries(0), numOnFloor(0)
{
	// std::cout << this->getName() << " Character Default Constructor" << std::endl;
	this->initInventory();
	this->initCache();
}

Character::Character(const Character &c) : ICharacter(), Name(c.getName()), numEntries(c.getNumEntries()), numOnFloor(0)
{
	// std::cout << this->getName() << " Character Copy Constructor" << std::endl;
	this->initInventory();
	this->initCache();
	if (this != &c)
		for (int i = 0; i < 4; i++)
			this->setInventoryEntry(i, c.getMateria(i));
}

Character::Character(const std::string name) : Name(name), numEntries(0), numOnFloor(0)
{
	// std::cout << this->getName() << " Character Name Constructor" << std::endl;
	this->initInventory();
	this->initCache();
}

//! End Constructors

//! Destructor

Character::~Character()
{
	// std::cout << this->getName() << " Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->getMateria(i))
			delete this->getMateria(i);
		if (this->getCache(i))
			delete this->getCache(i);
	}
}

//! End Destructor

//! Operators

Character	&Character::operator=(const Character &c)
{
	if (this != &c)
	{
		this->Name = c.getName();
		this->numEntries = c.getNumEntries();
		for (int i = 0; i < 4; i++)
		{
			if (this->getMateria(i))
				delete this->getMateria(i);
			this->setInventoryEntry(i, c.getMateria(i)->clone());
		}
	}
	return (*this);
}

//! End Operators

//! Member functions

void	Character::initInventory(void)
{
	for (int i = 0; i < 4; i++)
		this->inventoryEntry[i] = NULL;
}

void	Character::initCache(void)
{
	for (int i = 0; i < 4; i++)
		this->cache[i] = NULL;
}

void	Character::freeCache(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->getCache(i))
			delete this->getCache(i);
		injectCache(i, NULL);
	}
			
}

std::string const &Character::getName() const
{
	return (this->Name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	if (this->getNumEntries() < 4)
	{
		while (i < 4 && this->getMateria(i))
			i++;
		this->setInventoryEntry(i, m);
		this->setNumEntries(this->getNumEntries() + 1);
		this->freeCache();
	}
	else
	{
		std::cout << this->getName() << ": Inventory is full, use unequip to remove a Materia first" << std::endl; 
		delete m;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && this->getMateria(idx))
	{
		this->injectCache(this->getNumOnFloor(), this->getMateria(idx));
		this->setNumOnFloor(this->getNumOnFloor() + 1);
		this->setInventoryEntry(idx, NULL);
		this->setNumEntries(this->getNumEntries() - 1);
	}
	else
		std::cout << this->getName() << ": Cannot unequip what has not been equiped!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->getMateria(idx))
		this->getMateria(idx)->use(target);
	else
		std::cout << this->getName() << ": slot " << idx << " not weaponized" << std::endl;
}

void	Character::setInventoryEntry(int i, AMateria *ie)
{
	if (i < 4)
		this->inventoryEntry[i] = ie;
	else
		std::cout << this->getName() << ": slot " << i << " not available" << std::endl;
}

void	Character::injectCache(int i, AMateria *ie)
{
	if (i < 4)
		this->cache[i] = ie;
	else
		this->cache[i] = NULL;	
}

void	Character::setNumEntries(int i)
{
	this->numEntries = i;
}

void	Character::setNumOnFloor(int i)
{
	this->numOnFloor = i;
}

AMateria	*Character::getMateria(int i) const
{
	if (i < 4 && this->inventoryEntry[i])
		return (this->inventoryEntry[i]);
	return (NULL);
}

AMateria	*Character::getCache(int i) const
{
	if (i < 4 && this->cache[i])
		return (this->cache[i]);
	return (NULL);
}

int		Character::getNumEntries(void) const
{
	return (this->numEntries);
}

int		Character::getNumOnFloor(void) const
{
	return (this->numOnFloor);
}

//! End Member functions

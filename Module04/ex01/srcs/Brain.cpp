/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:30:23 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 18:13:11 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

//! Constructors
Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &b)
{
	if(this != &b)
		for (int i = 0; i < 100; i++)
			this->setIdea(i, b.getIdea(i));
}

//! End Constructors

//! Destructor

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

//! End Destructor

//! Operators

Brain	&Brain::operator=(const Brain &b)
{
	if(this != &b)
		for (int i = 0; i < 100; i++)
			this->setIdea(i, b.getIdea(i));
	return (*this);
}

//! End Operators

//! Member functions

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i < 100 && i >= 0)
		this->ideas[i] = idea;
}

void	Brain::setAllIdeas(Brain *b)
{
	for (int i = 0; i < 100; i++)
		this->setIdea(i, b->getIdea(i));
}

//! End Member functions

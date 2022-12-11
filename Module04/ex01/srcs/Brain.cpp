/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:30:23 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 16:37:59 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &b)
{
	if(this != &b)
		this->setIdeas(b.ideas);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &b)
{
	if(this != &b)
		this->setIdeas(b.ideas);
	return (*this);
}

std::string	*Brain::getIdeas(void)
{
	std::cout << "Brain ideas Getter Called" << std::endl;
	return (this->ideas);
}

void	Brain::setIdeas(const std::string *ideasEntry)
{
	std::cout << "Brain ideas Setter Called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = ideasEntry[i];
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:43:41 by wismith           #+#    #+#             */
/*   Updated: 2022/12/06 22:18:06 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

//! Constructors

Cat::Cat()
{
	this->set_type("Cat");
	std::cout << this->getType() << ": Default Constructor" << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat &c) : Animal()
{
	this->set_type(c.getType());
	std::cout << this->getType() << ": Copy Constructor" << std::endl;
	this->brain = new Brain;
	this->brain->setIdeas(c.brain->getIdeas());
}

//! End Constructors

//! Destructor

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->getType() << ": Destructor" << std::endl;
}

//! End Destructor

//! Operators

Cat	&Cat::operator=(const Cat &c)
{
	std::cout << "Copy Assignment Operator Overload" << std::endl;
	if (this != &c)
	{
		this->set_type(c.getType());
		this->brain->setIdeas(c.brain->getIdeas());
	}
	return (*this);
}

//! End Operators

//! Member functions

void	Cat::makeSound(void) const
{
	std::cout << "Meoow Meoow!" << std::endl;
}

Brain	*Cat::getBrain(void)
{
	return (this->brain);
}

//! End Member functions

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:13:35 by wismith           #+#    #+#             */
/*   Updated: 2022/12/06 22:17:00 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

//! Constructors

Dog::Dog()
{
	this->set_type("Dog");
	std::cout << this->getType() << ": Default Constructor" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog &d) : Animal()
{
	this->set_type(d.getType());
	std::cout << this->getType() << ": Copy Constructor" << std::endl;
	this->brain = new Brain;
	this->brain->setIdeas(d.brain->getIdeas());
}

//! end Constructors

//! Destructor

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->getType() << ": Destructor" << std::endl;
}

//! end Destructor

//! operators

Dog	&Dog::operator=(const Dog &d)
{
	std::cout << "Copy Assignment Operator Overload" << std::endl;
	if (this != &d)
	{
		this->set_type(d.getType());
		this->brain->setIdeas(d.brain->getIdeas());
	}
	return (*this);
}

//! end operators

//! Member functions

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark!" << std::endl;
}

Brain	*Dog::getBrain(void)
{
	return (this->brain);
}

//! End Member functions
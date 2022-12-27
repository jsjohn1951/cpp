/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 12:11:12 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 17:11:03 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

//! Constructors

Test::Test()
{
	std::cout << "Test Default Constructor" << std::endl;
}

Test::Test(const Test &t)
{
	std::cout << "Test Copy Constructor" << std::endl;
	if (this != &t)
	{
		this->setAge(t.getAge());
		this->setName(t.getName());
	}
}

Test::Test(const std::string name, unsigned int age) : Name(name), Age(age)
{
	std::cout << "Test Name / Age Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Test::~Test()
{
	std::cout << "Test Destructor" << std::endl;
}

//! End Destructor

//! Operators

Test	&Test::operator=(const Test &t)
{
	if (this != &t)
	{
		this->setAge(t.getAge());
		this->setName(t.getName());
	}
	return (*this);
}

//! End Operators

//! Setters

void	Test::setName(const std::string &name)
{
	this->Name = name;
}

void	Test::setAge(unsigned int age)
{
	this->Age = age;
}

//! End Setters

//! Getters

unsigned int	Test::getAge() const
{
	return (this->Age);
}

std::string		Test::getName() const
{
	return (this->Name);
}

//! End Getters

//! External Operators

std::ostream	&operator<<(std::ostream &o, const Test &t)
{
	o << "Name: " << t.getName() << std::endl;
	o << "Age: " << t.getAge() << std::endl;
	return (o);
}

//! End External Operators
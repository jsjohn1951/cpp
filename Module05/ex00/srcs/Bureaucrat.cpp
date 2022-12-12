/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:45:50 by wismith           #+#    #+#             */
/*   Updated: 2022/12/12 15:13:11 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

//** ------------------- Class Bureaucrat ------------------- **//

//! Constructors

Bureaucrat::Bureaucrat() : Name("Random Dude"), grade(1)
{
	std::cout << this->getName() << " Bureaucrat: Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : Name(b.Name) , grade(b.grade)
{
	std::cout << this->getName() << " Bureaucrat: Copy Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
	if (grade < 1 || grade > 150)
		(grade < 1 ? throw GradeTooHigh() : throw GradeTooLow());
	this->setName(name);
	this->setGrade(grade);
	std::cout << this->getName() << " Bureaucrat: name / grade Constructor" << std::endl;
}

//! End Constructors

//! Destructor

Bureaucrat::~Bureaucrat()
{
	std::cout << this->getName() << " Bureaucrat: Destructor" << std::endl;
}

//! End Destructor

//! Operators

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this != &b)
		this->setName(b.getName());
	std::cout << this->getName() << " Bureaucrat: Assignment Operator Overload" << std::endl;
	return (*this);
}

//! End Operators

//! Member functions

void	Bureaucrat::setName(std::string name)
{
	this->Name = name;
}

void	Bureaucrat::setGrade(int g)
{
	this->grade = g;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->Name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::increGrade(void)
{
	if (this->getGrade() - 1 < 1)
		throw (GradeTooHigh());
	this->setGrade(this->getGrade() - 1);
}

void	Bureaucrat::decreGrade(void)
{
	if (this->getGrade() + 1 > 150)
		throw (GradeTooHigh());
	this->setGrade(this->getGrade() + 1);
}

//! End Member functions

//** ------------------- End Class Bureaucrat ------------------- **//

//** ------------------- Exception Classes ------------------- **//

const char	*GradeTooHigh::what() const throw()
{
	return ("The Grade is too high! 1 is the highest, 150 is the lowest");
}

const char	*GradeTooLow::what() const throw()
{
	return ("The Grade is too low! 1 is the highest, 150 is the lowest");
}

//** ------------------- End Exception Classes ------------------- **//

//** ------------------- Outside functions ------------------- **//

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}

//** ------------------- End Outside functions ------------------- **//
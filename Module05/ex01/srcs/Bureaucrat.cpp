/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:45:50 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 16:28:56 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

//** ------------------- Class Bureaucrat ------------------- **//

//! Constructors

Bureaucrat::Bureaucrat() : Name("Random Dude"), grade(150)
{
	std::cout << this->getName() << " Bureaucrat: Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : Name(b.getName()) , grade(b.getGrade())
{
	std::cout << this->getName() << " Bureaucrat: Copy Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
	if (grade < 1 || grade > 150)
		(grade < 1 ? throw GradeTooHighException() : throw GradeTooLowException());
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
	std::cout << this->getName() << " Bureaucrat: Assignment Operator Overload" << std::endl;
	if (this != &b)
	{
		this->setName(b.getName());
		this->setGrade(b.getGrade());
	}
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
	std::cout << this->getName() << " attempting to increment grade..." << std::endl;
	if ((this->getGrade() - 1) < 1)
		throw (GradeTooHighException());
	this->setGrade(this->getGrade() - 1);
	std::cout << this->getName() << "'s new grade: " << this->getGrade() << std::endl;
}

void	Bureaucrat::decreGrade(void)
{
	std::cout << this->getName() << " attempting to decrement grade..." << std::endl;
	if ((this->getGrade() + 1) > 150)
		throw (GradeTooLowException());
	this->setGrade(this->getGrade() + 1);
	std::cout << this->getName() << "'s new grade: " << this->getGrade() << std::endl;
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " Bureaucrat signed " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " Bureaucrat couldn't sign form " << f.getName()
		<< " because ";
		std::cout << e.what() << std::endl;
	}
}

//! End Member functions

//** ------------------- End Class Bureaucrat ------------------- **//

//** ------------------- Exception Classes ------------------- **//

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The Grade is too high! 1 is the highest, 150 is the lowest");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The Grade is too low! 1 is the highest, 150 is the lowest");
}

//** ------------------- End Exception Classes ------------------- **//

//** ------------------- Outside functions ------------------- **//

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", Bureaucrat Grade " << b.getGrade();
	return (o);
}

//** ------------------- End Outside functions ------------------- **//
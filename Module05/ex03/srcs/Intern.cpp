/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:31:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/18 19:23:40 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

//! Constructors

Intern::Intern()
{
	std::cout << "Intern Default Constructor" << std::endl;
}

Intern::Intern(const Intern &i)
{
	std::cout << "Intern Copy Constructor" << std::endl;
	if (this != &i)
		*this = i;
}

//! End Constructors

//! Destructor

Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}

//! End Destructor

//! Operator

Intern	&Intern::operator=(const Intern &i)
{
	std::cout << "Copy assignment opertor overload" << std::endl;
	if (this != &i)
		*this = i;
	return (*this);
}

//! End operator

//! Member functions

AForm	*Intern::createForm(const std::string form, const std::string target) const
{
	int			i;
	std::string	formArr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	for (i = 0; i < 3 && form != formArr[i]; i++)
		;
	switch (i)
	{
		case (0) :
			return (new ShrubberyCreationForm(target));
		break ;
		case (1) :
			return (new RobotomyRequestForm(target));
		break ;
		case (2) :
			return (new PresidentialPardonForm(target));
		break ;
		default :
			throw formTemplateNotFound();
		break ;
	};
}

AForm	*Intern::makeForm(const std::string form, const std::string target) const
{
	AForm	*f;

	try
	{
		f = this->createForm(form, target);
		std::cout << "Intern creates " << f->getName() << std::endl;
		return (f);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (NULL);
	}
	
}

//! End Member functions

//! exceptions

const char *Intern::formTemplateNotFound::what() const throw()
{
	return ("Intern: Err retrieving Form Template, no such template exists");
}

//! End exceptions

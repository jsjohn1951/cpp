/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:57:19 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 16:44:06 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

//! Constructors

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), Target("Random Target")
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target : Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : AForm(p), Target(p.getTarget())
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target : Copy Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), Target(target)
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target : Target Constructor" << std::endl;
}

//! End Constructors

//! Destructor

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target : Destructor" << std::endl;
}

//! End Destructor

//! Operators

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	std::cout << this->getName() << ": Copy assignment operator overload called" << std::endl;
	if (this != &p)
	{
		this->setSign(p.getSign());
		const_cast<std::string &>(this->Target) = p.getTarget();
	}
	return (*this);
}

//! End Operators

//! Member functions

void	PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
	std::cout << "Attempting to execute..." << std::endl;
	if (!this->getSign() || executer.getGrade() > this->getGradeToExec())
		(!this->getSign() ? throw DocumentUnsignedException() : throw GradeTooLowException());
	else
		std::cout << executer.getName() << " has pardoned " << this->getTarget() << std::endl;
}

std::string		PresidentialPardonForm::getTarget() const
{
	return (this->Target);
}

//! End Member functions
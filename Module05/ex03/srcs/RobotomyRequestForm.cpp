/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:03:42 by wismith           #+#    #+#             */
/*   Updated: 2022/12/18 14:07:17 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/RobotomyRequestForm.hpp"

//! Constructors

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), Target("Random Target")
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target: Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) : AForm("RobotomyRequestForm", 72, 45), Target(r.getTarget())
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target: Copy Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), Target(target)
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target: Target Constructor" << std::endl;
}

//! End Constructors

//! Destructor

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target: Destructor" << std::endl;
}

//! End Destructor

//! Operators

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	(void) r;
	std::cout << this->getName() << ": Copy assignment operator overload called" << std::endl;
	std::cout << "\tUnable to copy anything! Target is const" << std::endl;
	return (*this);
}

//! End Operators

//! Member functions

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Attempting to execute..." << std::endl;
	if (!this->getSign() || executor.getGrade() > this->getGradeToExec())
		(!this->getSign() ? throw DocumentUnsignedException() : throw GradeTooLowException());
	std::cout << "* MAKES SOME DRILLING NOISES *" << std::endl;
	if ((rand() % 100) <= 50)
		std::cout << "Target " << this->getTarget() << " has successfully been robotomized" << std::endl;
	else
		std::cout << "Failed to robotomized target " << this->getTarget() << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->Target);
}

//! End Member functions

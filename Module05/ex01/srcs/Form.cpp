/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:53:45 by wismith           #+#    #+#             */
/*   Updated: 2022/12/15 10:47:13 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

//** ------------------- Class Form ------------------- **//

//! Constructors

Form::Form(): Name("Random Contract"), isSigned(false), gradeToSign(150), gradeToExec(150)
{
	std::cout << this->getName() << " Form: Default Constructor" << std::endl;
}

Form::Form(const Form &f) : Name(f.getName()), isSigned(f.getSign()), gradeToSign(f.getGradeToSign()), gradeToExec(f.getGradeToExec())
{
	std::cout << this->getName() << " Form: Copy Constructor" << std::endl;
}

Form::Form(const std::string &name, int gts, int gte): Name(name), isSigned(false), gradeToSign(gts), gradeToExec(gte)
{
	std::cout << this->getName() << " Form: Name & grade Constructor" << std::endl;
	if (gts > 150 || gte > 150)
		throw GradeTooLowException();
	else if (gts < 1 || gte < 1)
		throw GradeTooHighException();
}

//! End Constructors

//! Destructor

Form::~Form()
{
	std::cout << this->getName() << " Form: Destructor" << std::endl;
}

//! End Destructor

//! Operators

Form	&Form::operator=(const Form &f)
{
	std::cout << "Form: Copy Assignment Operator overload" << std::endl;
	if (this != &f)
	{
		this->setSign(f.getSign());
		std::cout << "\tForm msg: Some attributes are const, cannot copy values" << std::endl;
	}
	return (*this);
}

//! End Operators

//! Member functions

//** getters

std::string	Form::getName(void) const
{
	return (this->Name);
}

bool	Form::getSign(void) const
{
	return (this->isSigned);
}

int		Form::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int		Form::getGradeToExec(void) const
{
	return (this->gradeToExec);
}

//** end getters

//** setters

void	Form::setSign(bool sign)
{
	this->isSigned = sign;
}

//** end setters

//** Other

bool	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeToSign())
	{
		std::cout << b.getName() << " is signing the " << this->getName() << " Form" << std::endl;
		this->setSign(true);
	}
	else
		throw GradeTooLowException();
	return (this->getSign());
}

//** End Other

//! End Member functions

//** ------------------- End Class Form ------------------- **//

//** ------------- Exception Classes ------------- **//

const char *Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHigh Exception");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLow Exception");
}

//** ------------- End Exception Classes ------------- **//

//** ------------------- Outside functions ------------------- **//

std::ostream	&operator<<(std::ostream &o, const Form &f)
{
	o << "Form " << f.getName() << " info: " << std::endl;
	o << "Is signed: ";
	(f.getSign() ? o << "yes" << std::endl : o << "no" << std::endl);
	o << "Required grade to sign: " << f.getGradeToSign() << std::endl;
	o << "Required grade to execute: " << f.getGradeToExec() << std::endl;
	return (o);
}

//** ------------------- End Outside functions ------------------- **//
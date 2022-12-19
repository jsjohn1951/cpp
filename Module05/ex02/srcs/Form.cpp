/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:53:45 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 16:02:40 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

//** ------------------- Class Form ------------------- **//

//! Constructors

AForm::AForm(): Name("Random Contract"), isSigned(false), gradeToSign(150), gradeToExec(150)
{
	std::cout << this->getName() << " Form: Default Constructor" << std::endl;
}

AForm::AForm(const AForm &f) : Name(f.getName()), isSigned(f.getSign()), gradeToSign(f.getGradeToSign()), gradeToExec(f.getGradeToExec())
{
	std::cout << this->getName() << " Form: Copy Constructor" << std::endl;
}

AForm::AForm(const std::string &name, int gts, int gte): Name(name), isSigned(false), gradeToSign(gts), gradeToExec(gte)
{
	std::cout << this->getName() << " Form: Name & grade Constructor" << std::endl;
	if (gts > 150 || gte > 150)
		throw GradeTooLowException();
	else if (gts < 1 || gte < 1)
		throw GradeTooHighException();
}

//! End Constructors

//! Destructor

AForm::~AForm()
{
	std::cout << this->getName() << " Form: Destructor" << std::endl;
}

//! End Destructor

//! Operators

AForm	&AForm::operator=(const AForm &f)
{
	std::cout << "Form: Copy Assignment Operator overload" << std::endl;
	if (this != &f)
	{
		this->setSign(f.getSign());
		const_cast<std::string &>(this->Name) = f.getName();
		const_cast<int &>(this->gradeToSign) = f.getGradeToSign();
		const_cast<int &>(this->gradeToExec) = f.getGradeToExec();
	}
	return (*this);
}

//! End Operators

//! Member functions

//** getters

std::string	AForm::getName(void) const
{
	return (this->Name);
}

bool	AForm::getSign(void) const
{
	return (this->isSigned);
}

int		AForm::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int		AForm::getGradeToExec(void) const
{
	return (this->gradeToExec);
}

//** end getters

//** setters

void	AForm::setSign(bool sign)
{
	this->isSigned = sign;
}

//** end setters

//** Other

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeToSign())
	{
		std::cout << b.getName() << " is signing the " << this->getName() << " Form" << std::endl;
		this->setSign(true);
	}
	else
		throw GradeTooLowException();
}

//** End Other

//! End Member functions

//** ------------------- End Class Form ------------------- **//

//** ------------- Exception Classes ------------- **//

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("GradeTooHigh Exception");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("GradeTooLow Exception");
}

const char *AForm::DocumentUnsignedException::what() const throw()
{
	return ("Document Was Not Signed Exception!");
}

//** ------------- End Exception Classes ------------- **//

//** ------------------- Outside functions ------------------- **//

std::ostream	&operator<<(std::ostream &o, const AForm &f)
{
	o << "Form " << f.getName() << " info: " << std::endl;
	o << "Is signed: ";
	(f.getSign() ? o << "yes" << std::endl : o << "no" << std::endl);
	o << "Required grade to sign: " << f.getGradeToSign() << std::endl;
	o << "Required grade to execute: " << f.getGradeToExec() << std::endl;
	return (o);
}

//** ------------------- End Outside functions ------------------- **//
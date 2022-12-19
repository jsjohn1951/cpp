/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:48:35 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 16:45:12 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

//! Constructors

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), Target("Random Target")
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target: Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): AForm(s), Target(s.getTarget())
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target: Copy Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 145, 137), Target(target)
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target : Target Constructor" << std::endl;
}

//! End Constructors

//! Destructor

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " with '" << this->getTarget() << "' target : Destructor" << std::endl;
}

//! End Destructor

//! Operators

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	std::cout << this->getName() << ": Copy assignment operator overload called" << std::endl;
	if (this != &s)
	{
		this->setSign(s.getSign());
		const_cast<std::string &>(this->Target) = s.getTarget();
	}
	return (*this);
}

//! End Operators

//! Member functions

void ShrubberyCreationForm::createShrubbery() const
{
	std::ofstream	file(this->getTarget().append("_shrubbery").c_str());

	if (file.good())
	{
		file << "       &&& &&  & &&" << std::endl;
		file << "   && &||&||& ()|| @, &&" << std::endl;
		file << "   &||(|&|&|||& |_|)_&|_&" << std::endl;
		file << "  &() &||&|()|/&|| '% & () " << std::endl;
		file << " &_|_&&_| |& |&&|&__%_|_& &&" << std::endl;
		file << "&&   && & &| &| |& & % ()& |&&" << std::endl;
		file << " ()&_---()&|&||&&-&&--%---()~" << std::endl;
		file << "    &&     |||||" << std::endl;
		file << "         *  |||" << std::endl;
		file << "          **|||" << std::endl;
		file << "            ||||" << std::endl;
		file << "        -=-~  .-^- _";
		std::cout << "Shrubbery Created in " << this->getTarget() << "_shrubbery" << std::endl;
	}
	else
		std::cout << "Failed to create file" << std::endl;
	file.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::cout << "Attempting to create Shrubbery..." << std::endl;
	if (!this->getSign() || executor.getGrade() > this->getGradeToExec())
		(!this->getSign() ? throw DocumentUnsignedException() : throw GradeTooLowException());
	this->createShrubbery();
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->Target);
}

//! End Member functions

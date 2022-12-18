/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:46:05 by wismith           #+#    #+#             */
/*   Updated: 2022/12/18 19:11:04 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private :
		//! Private member functions
		AForm *createForm(const std::string form, const std::string target) const;

		//! Exceptions
		class	formTemplateNotFound : public std::exception
		{
			public :
				const char *what() const throw();
		};

	public :
		//! Constructors
		Intern();
		Intern(const Intern &i);
		
		//! Destructor
		~Intern();

		//! Operators
		Intern &operator=(const Intern &i);

		//! Member functions
		AForm	*makeForm(const std::string form, const std::string target) const;
};

#endif
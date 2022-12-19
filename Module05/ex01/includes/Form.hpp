/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:51:51 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 14:13:15 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		//! Private Attributes
		const std::string	Name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExec;

		//** ------------- Exception Classes ------------- **//
	class	GradeTooHighException : public std::exception
	{
		public :
			const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public :
			const char *what() const throw();
	};
	//** ------------- End Exception Classes ------------- **//

	public:
		//! Constructors
		Form();
		Form(const Form &f);
		Form(const std::string &name, int gts, int gte);

		//! Destructor
		~Form();

		//! Operators
		Form	&operator=(const Form &f);

		//! Member functions
		//** Getters **//
		std::string	getName() const;
		bool		getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		//** setters **//
		void		setSign(bool sign);

		//** Other **//
		void 		beSigned(const Bureaucrat &b);
};

std::ostream	&operator<<(std::ostream &o, const Form &f);

#endif
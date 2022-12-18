/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:51:51 by wismith           #+#    #+#             */
/*   Updated: 2022/12/16 19:43:18 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		//! Private Attributes
		const std::string	Name;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExec;


	public:
		//! Constructors
		AForm();
		AForm(const AForm &f);
		AForm(const std::string &name, int gts, int gte);

		//! Destructor
		virtual ~AForm();

		//! Operators
		AForm			&operator=(const AForm &f);

		//! Member functions
		//** Getters **//
		std::string		getName() const;
		bool			getSign() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;

		//** setters **//
		void			setName(std::string &name);
		void			setSign(bool sign);
		void			setGradeToSign(int grade);
		void			setGradeToExec(int grade);

		//** Other **//
		bool 			beSigned(const Bureaucrat &b);
		virtual	void	execute(Bureaucrat const & executor) const = 0;

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

	class	DocumentUnsignedException : public std::exception
	{
		public :
			const char *what() const throw();
	};
	//** ------------- End Exception Classes ------------- **//
};

std::ostream	&operator<<(std::ostream &o, const AForm &f);

#endif
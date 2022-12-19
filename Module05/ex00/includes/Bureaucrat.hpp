/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:36:10 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 17:38:29 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>


class Bureaucrat
{
	private :
	//! Attributes
		std::string Name;
		int	grade;

	//! Private Member functions
	void	setName(std::string name);
	void	setGrade(int g);

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

	public :
	//! Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat(const std::string &name, int grade);

	//! Destructor
		~Bureaucrat();

	//! operators
		Bureaucrat	&operator=(const Bureaucrat &b);

	//! Member functions
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increGrade(void);
		void		decreGrade(void);

};


std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif
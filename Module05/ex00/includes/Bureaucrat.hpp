/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:36:10 by wismith           #+#    #+#             */
/*   Updated: 2022/12/12 15:07:00 by wismith          ###   ########.fr       */
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
	
	//! Private constructors
	Bureaucrat();
	Bureaucrat(const Bureaucrat &b);

	//! Private Member functions
	void	setName(std::string name);
	void	setGrade(int g);

	public :
	//! Constructors
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

class	GradeTooHigh : public std::exception
{
	public :
		const char *what() const throw();
};
	
class	GradeTooLow : public std::exception
{
	public :
		const char *what() const throw();
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif
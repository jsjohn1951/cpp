/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:40:34 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 21:06:11 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private :
		//! Attributes
		const std::string Target;

		//! Private Member functions
		void	createShrubbery() const;

	public :
		//! Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm(const std::string target);

		//! Destructor
		~ShrubberyCreationForm();

		//! Operator
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &s);

		//! Member functions
		void					execute(Bureaucrat const & executor) const;
		std::string				getTarget() const;


};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:57:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/18 13:55:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	private :
		//! Attributes
		const std::string Target;

	public :
		//! Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &r);
		RobotomyRequestForm(const std::string target);

		//! Destructor
		~RobotomyRequestForm();

		//! Operators
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &r);

		//! Member functions
		void					execute(Bureaucrat const & executor) const;
		std::string 			getTarget() const;
};

#endif
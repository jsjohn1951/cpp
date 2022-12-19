/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:56:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 21:03:53 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		//! Attributes
		const std::string Target;

	public :

		//! Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &p);
		PresidentialPardonForm(const std::string &target);

		//! Destructor
		~PresidentialPardonForm();

		//! Assignment Operator overload
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &p);

		//! Member functions
		void					execute(Bureaucrat const & executor) const;
		std::string				getTarget() const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:16:54 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 21:04:33 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef TESTS_HPP
# define TESTS_HPP

# include "../includes/AForm.hpp"
# include "../includes/Bureaucrat.hpp"
# include "../includes/PresidentialPardonForm.hpp"
# include "../includes/ShrubberyCreationForm.hpp"
# include "../includes/RobotomyRequestForm.hpp"

//! ex00 tests
void	default_test();
void	test_Bureaucrat_one();
void	test_Bureaucrat_two();
void	test_Bureaucrat_three();

//! ex01 tests
//** unable to instantiate AForm. AForm is abstract and contains a pure virtual function
// void	default_instantiate_test();

//! ex02 tests
void	default_ex02_test();
void	test_ex02_one();
void	test_ex02_two();
void	test_ex02_three();

#endif
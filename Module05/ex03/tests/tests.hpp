/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:16:54 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 20:43:21 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef TESTS_HPP
# define TESTS_HPP

# include "../includes/Form.hpp"
# include "../includes/Bureaucrat.hpp"
# include "../includes/PresidentialPardonForm.hpp"
# include "../includes/ShrubberyCreationForm.hpp"
# include "../includes/RobotomyRequestForm.hpp"
# include "../includes/Intern.hpp"

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

//! ex03 tests

void	default_ex03_test();
void	test_ex03_one();

#endif
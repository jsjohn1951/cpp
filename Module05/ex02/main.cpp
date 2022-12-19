/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:31:52 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 19:36:29 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/tests.hpp"

int	main(void)
{
	//** ----- ex00 ----- **//

	//! default test
	// std::cout << std::endl;
	// default_test();

	//! test one
	// std::cout << std::endl;
	// test_Bureaucrat_one();

	//! test two
	// std::cout << std::endl;
	// test_Bureaucrat_two();

	//! test three
	// std::cout << std::endl;
	// test_Bureaucrat_three();

	//** ----- End ex00 ----- **//

	//** ----- ex01 ----- **//

	//! default Form test
	// std::cout << std::endl;
	// default_Form_test();

	//! test Form one
	// std::cout << std::endl;
	// test_Form_one();

	//! test Form two
	// std::cout << std::endl;
	// test_Form_two();

	//! test AForm instantiation
	// default_instantiate_test();

	//** ----- End ex01 ----- **//

	//** ----- ex02 ----- **//

	// //! default ex02 test
	std::cout << std::endl;
	default_ex02_test();

	//! ex02 test one
	std::cout << std::endl;
	test_ex02_one();

	//! ex02 test two
	std::cout << std::endl;
	test_ex02_two();

	//! ex02 test three
	std::cout << std::endl;
	test_ex02_three();

	//** ----- End ex02 ----- **//

	return (0);
}
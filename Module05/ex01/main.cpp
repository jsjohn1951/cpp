/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:31:52 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 18:14:36 by wismith          ###   ########.fr       */
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
	std::cout << std::endl;
	default_Form_test();

	//! test Form one
	std::cout << std::endl;
	test_Form_one();

	//! test Form two
	std::cout << std::endl;
	test_Form_two();

	//! test Form three
	std::cout << std::endl;
	test_Form_three();

	//** ----- End ex01 ----- **//

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:31:52 by wismith           #+#    #+#             */
/*   Updated: 2022/12/15 10:27:51 by wismith          ###   ########.fr       */
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
	
	//** ----- End ex01 ----- **//
	
	return (0);
}
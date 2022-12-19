/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:31:52 by wismith           #+#    #+#             */
/*   Updated: 2022/12/19 17:40:33 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/tests.hpp"

int	main(void)
{
	//! default test
	std::cout << std::endl;
	default_test();

	//! test one
	std::cout << std::endl;
	test_Bureaucrat_one();

	//! test two
	std::cout << std::endl;
	test_Bureaucrat_two();

	//! test three
	std::cout << std::endl;
	test_Bureaucrat_three();
	return (0);
}
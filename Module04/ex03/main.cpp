/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:40:19 by wismith           #+#    #+#             */
/*   Updated: 2022/12/10 15:30:26 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests/tests.hpp"

int main()
{
	std::cout << std::endl;
	test_default();
	non_default_tests();
	testCharacter_Materia();
	return 0;
}
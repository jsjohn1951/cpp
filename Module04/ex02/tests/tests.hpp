/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:15:02 by wismith           #+#    #+#             */
/*   Updated: 2022/12/11 22:23:32 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef TESTS_HPP
# define TESTS_HPP

#include "../includes/Animal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

//! ex00 tests
void	default_test();
void	test_two();
void	test_three();
void	test_four_wrongAnimal();

//! ex01 tests
void	default_brain_test();
void	test_one_brain();
void	test_two_brain();

//! ex02 test
void	Default_test_abstract();
void	test_one_abstract();

#endif
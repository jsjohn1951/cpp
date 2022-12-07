/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:15:02 by wismith           #+#    #+#             */
/*   Updated: 2022/12/07 16:09:45 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef TESTS_HPP
# define TESTS_HPP

#include "../includes/Animal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

void	Animal_t();
void	Wrong_Animal_t();
void	Brain_test();
void	deep_copy_test();
void	abstract_class_tests();

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:14:50 by wismith           #+#    #+#             */
/*   Updated: 2022/12/02 16:41:34 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef TESTS_HPP
# define TESTS_HPP

# include "../includes/FrapTrap.hpp"
# include "../includes/ScavTrap.hpp"

//! ClapTrap
void	ClapTrap_default_test(void);
void	ClapTrap_test_one(void);
void	ClapTrap_test_two(void);
void	ClapTrap_test_three(void);

//! ScavTrap Tests
void	ScavTrap_cloning_test();

//! FrapTrap Tests
void	FrapTrap_default_test();
void	FrapTrap_test_one();
void	FrapTrap_test_simple();

#endif
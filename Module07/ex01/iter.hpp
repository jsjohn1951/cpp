/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:03:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 17:47:37 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include "Test.hpp"

template <typename T>
void	iter(T *p, unsigned int len, void (*f)(const T &))
{
	for (unsigned int i = 0; i < len; i++)
		f(p[i]);
}

template <typename T>
void	printIndex(const T &c)
{
	std::cout << c << std::endl;
}

#endif
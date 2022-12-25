/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:03:11 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 22:24:34 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename P>
void	iter(P *p, unsigned int len, void (*f)(P &))
{
	for (unsigned int i = 0; i < len; i++)
		f(p[i]);
}

template <typename C>
void	printIndex(C &c)
{
	std::cout << c << " ";
}

#endif
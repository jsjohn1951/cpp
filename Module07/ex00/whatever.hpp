/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:12:24 by wismith           #+#    #+#             */
/*   Updated: 2022/12/27 18:14:35 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include "Test.hpp"

template <typename T>
void	swap(T &s1, T &s2)
{
	T tmp = s1;
	s1 = s2;
	s2 = tmp;
}

template <typename T>
T	min(T m1, T m2)
{
	return ((m1 < m2 ? m1 : m2));
}

template <typename T>
T	max(T m1, T m2)
{
	return ((m1 > m2 ? m1 : m2));
}

#endif
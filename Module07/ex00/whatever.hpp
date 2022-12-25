/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:12:24 by wismith           #+#    #+#             */
/*   Updated: 2022/12/25 19:43:05 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename S>
void	swap(S &s1, S &s2)
{
	S tmp = s1;
	s1 = s2;
	s2 = tmp;
}

template <typename N>
N	min(N m1, N m2)
{
	return ((m1 < m2 ? m1 : m2));
}

template <typename M>
M	max(M m1, M m2)
{
	return ((m1 > m2 ? m1 : m2));
}

#endif
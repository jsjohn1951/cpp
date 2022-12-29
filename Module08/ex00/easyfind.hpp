/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:03:43 by wismith           #+#    #+#             */
/*   Updated: 2022/12/29 13:55:28 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <deque>
# include <cstdlib>
# include <vector>

class NotFound : public std::exception
{
	public :
		const char *what() const throw()
		{
			return ("Couldn't find element!");
		}
};

template <typename T>
void	easyfind(const T &t, int i)
{
	bool	found;

	(std::find(t.begin(), t.end(), i) != t.end() ? found = true : found = false); 
	if (!found)
		throw (NotFound());
	std::cout << "Found Element!" << std::endl;
}

#endif
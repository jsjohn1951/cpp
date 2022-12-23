/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:44:37 by wismith           #+#    #+#             */
/*   Updated: 2022/12/23 22:45:36 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	std::string			Name;
	unsigned int		age;
	unsigned int		dataOfBirth;
}	Data;

#endif
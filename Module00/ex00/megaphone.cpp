/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:20:23 by wismith           #+#    #+#             */
/*   Updated: 2022/08/20 11:12:38 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				if (!(argv[i][j] >= 97 && argv[i][j] <= 122))
					std::cout << argv[i][j];
				else
					std::cout << (char) toupper(argv[i][j]);
		}
	std::cout << std::endl;
	return (0);
}

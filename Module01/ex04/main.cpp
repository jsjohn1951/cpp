/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:58:19 by wismith           #+#    #+#             */
/*   Updated: 2022/10/23 00:12:20 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	header(std::string file, std::string s1, std::string s2)
{
	std::cout << "\n\t*file name:\t'\x1B[32m" << file << "\x1B[0m'" << std::endl;
	std::cout << "\tstring s1:\t'\x1B[31m" << s1 << "\x1B[0m'" << std::endl;
	std::cout << "\tstring s2:\t'\x1B[35m" << s2 << "\x1B[0m'" << std::endl;
	std::cout << "\n\t\x1B[32mgenerating new file...\x1B[0m" << std::endl << std::endl;
}

void	creation(char *file, std::string s1, std::string s2)
{
	std::ifstream	file1(file);
	std::ofstream	file2(std::string(file).append(".replace").c_str(), std::ofstream::out);
	size_t			pos;

	if (file1)
	{
		for (std::string line; getline(file1, line); )
		{
			while ((pos = line.find(s1)) != line.npos)
				line.erase(pos, s1.length()).insert(pos, s2);
			file2 << line;
			if (!file1.eof())
				file2 << std::endl;
		}
	}
	else
		std::cout << file << ": " << "Cannot open file!\n" << std::endl;
	file2.close();
	file1.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "incorrect number of arguments" << std::endl;
		return (1);
	}
	header(argv[1], argv[2], argv[3]);
	creation(argv[1], argv[2], argv[3]);
	return (0);
}

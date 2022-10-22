/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:58:19 by wismith           #+#    #+#             */
/*   Updated: 2022/10/01 22:36:10 by wismith          ###   ########.fr       */
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

void	creation(std::string file, std::string s1, std::string s2)
{
	std::string		save_name;
	std::ifstream	file1;
	std::ofstream	file2;
	size_t			pos;

	save_name = file;
	file1.open(file);
	if (file1)
	{
		file2.open(file.append(".replace"));
		for (std::string line; getline(file1, line); )
		{
			while ((pos = line.find(s1)) != line.npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
			file2 << line << std::endl;
		}
		file2.close();
	}
	else
		std::cout << save_name << ": " << "No such file or directory!\n" << std::endl;
	file1.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "argc argv: More arguments required" << std::endl;
		return (1);
	}
	header(argv[1], argv[2], argv[3]);
	creation(argv[1], argv[2], argv[3]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:58:19 by wismith           #+#    #+#             */
/*   Updated: 2022/10/29 22:11:03 by wismith          ###   ########.fr       */
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

int	errmsg(int i, std::string str)
{
	if (i == 1)
		std::cout << "replace: " << "\x1B[31m" << "incorrect number of arguments" << "\x1B[0m" << std::endl;
	else if (i == 2)
		std::cout << "replace: " << "\x1B[31m" << "File and / or string 1 can't be zero!" << "\x1B[0m" << std::endl;
	else if (i == 3)
		std::cout << "replace: "  << "\x1B[31m" << "Could not create file replacement file" << "\x1B[0m" << std::endl;
	else if (i == 4)
		std::cout << "replace: " << str
			<< ": " << "\x1B[31m" << "Cannot open file!\n" << "\x1B[0m";
	(void) str;
	return (1);
}

int	createReplace(std::string sav, std::string file, std::string s1, std::string s2)
{
	std::ofstream	outfile(file.append(".replace").c_str());
	size_t			pos = -1;

	if (outfile.good())
	{
		while ((pos = sav.find(s1, pos + 1)) != sav.npos)
		{
			sav.erase(pos, s1.length()).insert(pos, s2);
			pos += s2.length() - 1;
		}
		outfile << sav;
	}
	else
		return (errmsg(3, ""));
	outfile.close();
	header(file, s1, s2);
	return (0);
}

int	creation(std::string file, std::string s1, std::string s2)
{
	std::ifstream	infile(file.c_str());
	std::string		sav;

	if (infile.good())
	{
		for (std::string line; getline(infile, line);)
		{
			sav += line;
			if (!infile.eof())
				sav += "\n";
		}
	}
	else
		return (errmsg(4, file));
	infile.close();
	return (createReplace(sav, file, s1, s2));
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (errmsg(1, ""));
	if (!std::string(argv[1]).length() || !std::string(argv[2]).length())
		return (errmsg(2, ""));
	return (creation(std::string(argv[1]),
		std::string(argv[2]), std::string(argv[3])));
}

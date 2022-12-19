/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:34:20 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/09 01:52:39 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myString.hpp"
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		line;
	std::ifstream	file;
	std::ofstream	newFile;
	myString		myStr;

	if (argc != 4)
	{
		std::cout << "Usage: ./Sed_is_for_losers [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	newFile.open((std::string(argv[1]) + ".replace").c_str());
	while (std::getline(file, line))
	{
		myStr.setString(line);
		while (line.find(argv[2]) != std::string::npos)
			line = myStr.replaceString(argv[2], argv[3]);
		std::cout << myStr.getString() << std::endl;
		newFile << myStr.getString() << std::endl;
	}
	newFile.close();
	file.close();
	return (0);
}

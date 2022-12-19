/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:42:27 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 10:54:36 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string strtoupper(std::string str)
{
	int leng=str.length();
	for(int i=0; i<leng; i++)
		if ('a' <= str[i] && str[i] <= 'z')
			str[i]-=32;
	return str;
}

int	main(void)
{
	Phonebook	phonebook;
	std::string	command;

	std::cout << "Enter a command: ";
	while (std::getline(std::cin, command))
	{
		if (strtoupper(command) == "ADD")
		{
			if (phonebook.addContact())
				return (0);
		}
		else if (strtoupper(command) == "SEARCH")
		{
			if (phonebook.searchContact())
				return (0);
		}
		else if (strtoupper(command) == "EXIT")
			return (0);
		else
			std::cout << "Invalid command" << std::endl;
		std::cin.clear();
		std::cout << "Enter a command: ";
	}
	return (0);
}

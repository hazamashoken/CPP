/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 02:27:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/09 02:45:11 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 1)
	{
		std::cout << "Usage: ./harl [debug|info|warning|error]" << std::endl;
		return (0);
	}
	std::string	complaints[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == argv[1])
		{
			switch (i)
			{
				case 0:
					harl.complain("debug");
					harl.complain("info");
					harl.complain("warning");
					harl.complain("error");
					return (0);
				case 1:
					harl.complain("info");
					harl.complain("warning");
					harl.complain("error");
					return (0);
				case 2:
					harl.complain("warning");
					harl.complain("error");
					return (0);
				case 3:
					harl.complain("error");
					return (0);
			}
		}
	}
	std::cout << "\e[34m[ Probably complaining about insignificant problems ]\e[0m\n" << std::endl;
	return (0);
}

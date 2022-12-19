/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 02:03:17 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/09 02:37:10 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl has been created." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl has been destroyed." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	complaints[4] = {"debug", "info", "warning", "error"};

	typedef void (Harl::*functions)(void);
	functions fncs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (level == complaints[i])
			(this->*fncs[i])();
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n You didn\'t put enough bacon in my burger!\n If you did, I wouldn\'t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!\n I want to speak to the manager now." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 02:03:17 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/09 02:47:00 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
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
	std::cout << "\e[37m[ DEBUG ]\e[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\e[32m[ INFO ]\e[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn\'t put enough bacon in my burger!\nIf you did, I wouldn\'t be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\e[33m[ WARNING ]\e[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI\'ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\e[31m[ ERROR ]\e[0m" << std::endl;
	std::cout << "This is unacceptable!\nI want to speak to the manager now.\n" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:28:47 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 01:31:20 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
}

Intern::Intern( const Intern &src )
{
	*this = src;
}

Intern::~Intern( void )
{
}

Intern	&Intern::operator=( const Intern &other )
{
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string target)
{
	const char *formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm *forms[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i]);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return (NULL);
}



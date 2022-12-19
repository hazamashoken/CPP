/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:23:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 11:45:27 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
	try {
		Bureaucrat	a = Bureaucrat("A", 1);
		Bureaucrat	b = Bureaucrat("B", 100);
		Bureaucrat	c = Bureaucrat("C", 150);
		AForm *pForm = new PresidentialPardonForm("Pres 25");	// requied grade  25
		AForm *rForm = new RobotomyRequestForm("Robot 72");		// requied grade  72
		AForm *sForm = new ShrubberyCreationForm("Shub 145");	// requied grade 145
		pForm->beSigned(a);
		rForm->beSigned(a);
		sForm->beSigned(a);
		for (int i = 149; i > 0; i--)
			c.incrementGrade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		c.executeForm(*sForm);
		c.executeForm(*rForm);
		c.executeForm(*pForm);
		delete pForm;
		delete rForm;
		delete sForm;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

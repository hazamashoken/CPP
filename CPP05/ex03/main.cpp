/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:23:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 01:34:00 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	std::cout << "======= INTERN =======" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		AForm* rrr;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrr = someRandomIntern.makeForm("shrubbery creation", "Scrub");
		std::cout << *rrf << std::endl;
		std::cout << *rrr << std::endl;
		delete rrr;
		delete rrf;
	}
	std::cout << "======= FORM =======" << std::endl;
	try {
		Bureaucrat	a = Bureaucrat("A", 1);
		Bureaucrat	b = Bureaucrat("Bad", 100);
		Bureaucrat	c = Bureaucrat("Cat", 150);
		AForm *pForm = new PresidentialPardonForm("Pres");	// requied grade  25
		AForm *rForm = new RobotomyRequestForm("Robot");		// requied grade  72
		AForm *sForm = new ShrubberyCreationForm("Shub");	// requied grade 145
		pForm->execute(a);
		rForm->execute(a);
		sForm->execute(a);
		// c.executeForm(*sForm); // Fail
		// c.executeForm(*rForm); // Fail
		// c.executeForm(*pForm); // Fail

		delete pForm;
		delete rForm;
		delete sForm;
	} catch (std::exception &e) {
		std::cout << "catch main" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return 0;
}

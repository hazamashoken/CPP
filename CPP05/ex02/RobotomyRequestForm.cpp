/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:36:47 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 00:57:40 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ) : AForm("RobotomyRequestForm", 72, 45)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
	this->setTarget(other.getTarget());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	srand(time(NULL));
	if ( rand() % 2 == 0)
		std::cout << *this << std::endl;
	else
		std::cout << executor.getName() << " is fail by Robot" << std::endl;
}


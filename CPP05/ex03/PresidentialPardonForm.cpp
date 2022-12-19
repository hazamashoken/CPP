/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:37:54 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 01:00:30 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src ) : AForm("PresidentialPardonForm", 25, 5)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
	this->setTarget(other.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}




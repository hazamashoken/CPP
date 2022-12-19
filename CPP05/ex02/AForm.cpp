/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:51:16 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:43:14 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ) : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
	// std::cout << "Default constructor for Form called" << std::endl;
}

AForm::AForm( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute ):
	 _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	// std::cout << "String constructor for Form called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( AForm const & src ):
	_name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	// std::cout << "Copy constructor for Form called" << std::endl;
	*this = src;
}

AForm::~AForm( void )
{
	// std::cout << "Destructor for Form called" << std::endl;
}

AForm &	AForm::operator=( AForm const & rhs )
{
	this->_signed = rhs.getSigned();
	// std::cout << "Assignement operator for Form called" << std::endl;
	return (*this);
}

std::string	const &AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

unsigned int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

unsigned int	AForm::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
	std::cout << bureaucrat.getName() << " signs " << getName() << std::endl;
}

std::ostream &	operator<<( std::ostream & o, AForm const & rhs )
{
	o << "Form " << rhs.getName() << " is ";
	if (rhs.getSigned())
		o << "signed";
	else
		o << "unsigned";
	o << " and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExecute() << " to execute.";
	return (o);
}

std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

void	AForm::setTarget(std::string target)
{
	this->_target = target;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw AForm::FormNotSignedException();
}



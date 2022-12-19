/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:51:16 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:40:15 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
	// std::cout << "Default constructor for Form called" << std::endl;
}

Form::Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute ):
	 _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	// std::cout << "String constructor for Form called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( Form const & src ):
	_name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	// std::cout << "Copy constructor for Form called" << std::endl;
	*this = src;
}

Form::~Form( void )
{
	// std::cout << "Destructor for Form called" << std::endl;
}

Form &	Form::operator=( Form const & rhs )
{
	this->_signed = rhs.getSigned();
	// std::cout << "Assignement operator for Form called" << std::endl;
	return (*this);
}

std::string	const &Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

unsigned int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

unsigned int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw Bureaucrat::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	o << "Form " << rhs.getName() << " is ";
	if (rhs.getSigned())
		o << "signed";
	else
		o << "unsigned";
	o << " and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExecute() << " to execute." << std::endl;
	return (o);
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:58:40 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:43:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	// std::cout << "Default constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ): _name(name), _grade(grade)
{
	// std::cout << "String constructor for Bureaucrat called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	// std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat( void )
{
	// std::cout << "Destructor for Bureaucrat called" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs.getGrade();
	// std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}

void	Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

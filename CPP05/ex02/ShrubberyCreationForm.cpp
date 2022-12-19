/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:24:31 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 00:57:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
	this->setTarget(other.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream file;
	file.open(filename.c_str());
	if (file.is_open()) {
		file << tree;
		file.close();
		std::cout << filename << " has been created" << std::endl;
  	} else {
		std::cout << "Unable to open file";
	}
}

std::ostream &operator<<( std::ostream &o, ShrubberyCreationForm const &rhs )
{
	o << rhs.getName() << " is a " << rhs.getGradeToSign() << " grade to sign and " << rhs.getGradeToExecute() << " grade to execute form" << std::endl;
	return o;
}

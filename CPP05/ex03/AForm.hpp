/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:50:46 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:42:21 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm( void );
		AForm( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute );
		AForm( AForm const &src );
		virtual ~AForm( void );

		AForm	&operator=( AForm const &other );

		std::string const	&getName( void ) const ;
		bool				getSigned( void ) const ;
		unsigned int		getGradeToSign( void ) const ;
		unsigned int		getGradeToExecute( void ) const ;

		std::string			getTarget( void ) const ;
		void				setTarget( std::string target ) ;
		void				beSigned( Bureaucrat const &bureaucrat );

		virtual void				execute( Bureaucrat const &executor ) const= 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Form grade too high"; }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Form grade too low"; }
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Form not signed"; }
		};

	protected:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExecute;
		std::string			_target;
};

std::ostream	&operator<<( std::ostream &o, AForm const &other );

#endif

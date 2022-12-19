/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:50:46 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:41:01 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExecute;

	public:
		Form( void );
		Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute );
		Form( Form const &src );
		~Form( void );

		Form	&operator=( Form const &other );

		std::string const	&getName( void ) const ;
		bool				getSigned( void ) const ;
		unsigned int		getGradeToSign( void ) const ;
		unsigned int		getGradeToExecute( void ) const ;

		void				beSigned( Bureaucrat const &bureaucrat );

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
};

std::ostream	&operator<<( std::ostream &o, Form const &other );

#endif

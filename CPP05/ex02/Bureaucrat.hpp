/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:58:38 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:42:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:

		Bureaucrat( void );
		Bureaucrat( std::string name, unsigned int grade );
		Bureaucrat( const Bureaucrat &src );
		virtual ~Bureaucrat( void );

		Bureaucrat		&operator=( const Bureaucrat &other );

		std::string		getName( void ) const ;
		unsigned int	getGrade( void ) const ;
		void			incrementGrade( void );
		void			decrementGrade( void );

		void			signForm( AForm &form );
		void			executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Bureaucrat grade too high"; }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() { return "Bureaucrat grade too low"; }
		};

	private:

		std::string const	_name;
		unsigned int		_grade;
};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &other );

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:28:35 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 01:31:03 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:

		Intern( void );
		Intern( const Intern &src );
		~Intern( void );

		Intern	&operator=( const Intern &other );

		AForm	*makeForm(std::string formName, std::string target);

	private:
};

#endif

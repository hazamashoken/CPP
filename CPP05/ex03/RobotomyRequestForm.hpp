/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:36:18 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 00:55:19 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm &src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator=( const RobotomyRequestForm &other );


		void		execute(Bureaucrat const & executor) const;

	private:
};

#endif

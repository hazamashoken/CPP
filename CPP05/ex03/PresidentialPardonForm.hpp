/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:37:43 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 00:55:13 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm &src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator=( const PresidentialPardonForm &other );


		void		execute(Bureaucrat const & executor) const;

	private:
};

#endif

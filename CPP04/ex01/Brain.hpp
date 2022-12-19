/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:44:18 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 16:23:02 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		virtual ~Brain(void);
		Brain & operator=(Brain const & rhs);

		std::string	*getIdeas(void) const;
		Brain*		clone(void) const;

	protected:
		std::string *_ideas;
};

#endif

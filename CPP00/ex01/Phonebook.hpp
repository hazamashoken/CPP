/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:27:06 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/08 15:26:34 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);

		int	addContact(void);
		int	searchContact(void);
;
	private:
		int		_index;
		int		_size;
		int		_capacity;
		Contact _contacts[8];
		std::string _trimAndPad(std::string str, size_t len);
};

#endif

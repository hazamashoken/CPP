/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myString.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:35:04 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/09 01:52:22 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSTRING_HPP
# define MYSTRING_HPP

# include <iostream>

class myString
{
	public:
		myString(void);
		myString(std::string str);
		~myString(void);

		int		size(void);
		void	setString(std::string str);
		std::string	getString(void);

		std::string	replaceString(std::string str, std::string replace);

	private:
		std::string	_str;
};

#endif

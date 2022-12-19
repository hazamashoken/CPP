/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myString.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:35:58 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/09 02:00:43 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myString.hpp"

myString::myString(void)
{
	std::cout << "myString has been created." << std::endl;
}

myString::myString(std::string str): _str(str)
{
	std::cout << "myString of " << this->_str << " has been created." << std::endl;
}

myString::~myString(void)
{
	std::cout << "myString has been destroyed." << std::endl;
}

int		myString::size(void)
{
	return (this->_str.size());
}

void	myString::setString(std::string str)
{
	this->_str = str;
	return ;
}

std::string	myString::getString(void)
{
	return (this->_str);
}

std::string	myString::replaceString(std::string str, std::string replace)
{
	size_t	pos = 0;
	std::string newStr;
	while ((pos = this->_str.find(str, pos)) != std::string::npos)
	{
		newStr = this->_str.substr(0, pos);
		newStr += replace;
		newStr += this->_str.substr(pos + str.size());
		this->_str = newStr;
		pos += replace.size();
	}
	return (this->_str);
}

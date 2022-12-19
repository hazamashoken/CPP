/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:28:20 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 22:03:14 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <cstdlib>



Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_size = 0;
	this->_capacity = 8;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

int	Phonebook::addContact(void)
{
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		darkestSecret;
	Contact			contact;


	std::cout << "First Name: ";
	if (!std::getline(std::cin, firstName))
		return (EXIT_FAILURE);
	std::cout << "Last Name: ";
	if (!std::getline(std::cin, lastName))
		return (EXIT_FAILURE);
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nickname))
		return (EXIT_FAILURE);
	std::cout << "Phone Number: ";
	if (!std::getline(std::cin, phoneNumber))
		return (EXIT_FAILURE);
	std::cout << "Darkest Secret: ";
	if (!std::getline(std::cin, darkestSecret))
		return (EXIT_FAILURE);

	this->_contacts[this->_index].setFirstName(firstName);
	this->_contacts[this->_index].setLastName(lastName);
	this->_contacts[this->_index].setNickname(nickname);
	this->_contacts[this->_index].setPhoneNumber(phoneNumber);
	this->_contacts[this->_index].setDarkestSecret(darkestSecret);
	this->_contacts[this->_index].setIndex(this->_index);
	this->_index++;
	if (this->_size < this->_capacity)
		this->_size++;
	if (this->_size == this->_capacity && this->_index == this->_capacity)
		this->_index = 0;
	return (EXIT_SUCCESS);
}

std::string Phonebook::_trimAndPad(std::string str, size_t len)
{
	if (str.length() > len)
		return (str.substr(0, len - 1) + ".");
	else
	{
		while (str.length() < len)
			str = " " + str;
		return (str);
	}
}

int	Phonebook::searchContact(void)
{
	int			searchIndex;
	std::string input;

	std::cout << "--------------" << std::endl;
	std::cout << "Search Contact" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "| Index |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	for (int i = 0; i < this->_size; i++)
	{
		std::cout << "|   " << this->_contacts[i].getIndex() << "   |";
		std::cout << this->_trimAndPad(this->_contacts[i].getFirstName(), 10) << "|";
		std::cout << this->_trimAndPad(this->_contacts[i].getLastName(), 10) << "|";
		std::cout << this->_trimAndPad(this->_contacts[i].getNickname(), 10) << "|" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
	}
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, input))
		return (EXIT_FAILURE);
	std::stringstream(input) >> searchIndex;
	if (searchIndex >= 0 && searchIndex < this->_size)
	{
		std::cout << "--------------" << std::endl;
		std::cout << "First Name: " << this->_contacts[searchIndex].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_contacts[searchIndex].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contacts[searchIndex].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->_contacts[searchIndex].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->_contacts[searchIndex].getDarkestSecret() << std::endl;
		std::cout << "--------------" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
	return (EXIT_SUCCESS);
}

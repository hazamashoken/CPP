/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:44:36 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:09:47 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "bad idea";
	std::cout << "Brain filled with bad ideas" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::string *ideas = src.getIdeas();
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	delete [] this->_ideas;
	std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	std::cout << "Brain assignation operator called" << std::endl;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Brain const & rhs)
{
	o << &rhs;
	return (o);
}

std::string	*Brain::getIdeas(void) const
{
	return (this->_ideas);
}

Brain*		Brain::clone(void) const
{
	return (new Brain(*this));
}
